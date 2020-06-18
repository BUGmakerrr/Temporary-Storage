#pragma once

template<class K, class V>
struct AVTreeNode
{
	AVTreeNode<K, V>* _left;
	AVTreeNode<K, V>* _right;
	AVTreeNode<K, V>* _parent;

	int _bf;  // balance factor  ƽ������

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
		// 1���Ȱ��������Ĺ�����в���
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

		// 2.����ƽ������
		while (parent)
		{
			if (cur == parent->_right)
				parent->_bf++;
			else
				parent->_bf--;

			if (parent->_bf == 0)
			{
				// ˵��parent���ڵ������ĸ߶Ȳ��䣬���½���
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				// ˵��parent���ڵ������ĸ߶ȱ��ˣ��������ϸ���
				cur = parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				// parent���ڵ��������ֲ�ƽ���ˣ���Ҫ��ת����
				// 
			}
		}

		return true;
	}

private:
	Node* _root = nullptr;
};