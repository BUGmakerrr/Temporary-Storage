#pragma once

template<class K, class V>
struct AVTreeNode
{
	AVTreeNode<K, V>* _left;
	AVTreeNode<K, V>* _right;
	AVTreeNode<K, V>* _parent;

	int _bf;  // balance factor  平衡因子

	pair<K, V> _kv;
	
	AVTreeNode(const pair<K, V>& kv)
		: _left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _kv(kv)
		, _bf(0)
	{}
};

template<class K, class V>
class AVLTree
{
	typedef AVTreeNode<K, V> Node;
public:
	bool Insert(const pair<K, V>& kv)
	{
		// 1、先按搜索树的规则进行插入
		if (_root == nullptr)
		{
			_root = new Node(kv);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else if (cur->_kv.first <= kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(kv);
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
			cur->_parent = parent;
		}
		else
		{
			parent->_left = cur;
			cur->_parent = parent;
		}

		// 2.更新平衡因子
		while (parent)
		{
			if (cur == parent->_right)
				parent->_bf++;
			else
				parent->_bf--;

			if (parent->_bf == 0)
			{
				// 说明parent所在的子树的高度不变，更新结束
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				// 说明parent所在的子树的高度变了，继续往上更新
				cur = parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				// parent所在的子树出现不平衡了，需要旋转处理。
				// 
			}
		}

		return true;
	}

private:
	Node* _root = nullptr;
};