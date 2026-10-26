#pragma once
#include "common.h"

/* nw::ut intrusive list node. */
typedef struct ListNode {
    /* 0x0 */ struct ListNode *next;
    /* 0x4 */ struct ListNode *prev;
} ListNode;

/* nw::ut::internal::LinkListImpl: a circular list whose sentinel node follows the count. */
typedef struct LinkList {
    /* 0x0 */ u32 count;
    /* 0x4 */ ListNode node;
} LinkList;

/* nw::ut::internal::LinkListImpl::Iterator */
struct LinkListIterator {
    ListNode *node;

    LinkListIterator(ListNode *n) : node(n) {}
    bool operator!=(const LinkListIterator &other) const { return node != other.node; }
    LinkListIterator operator++(int)
    {
        LinkListIterator prev(node);
        node = node->next;
        return prev;
    }
};

static __inline LinkListIterator linkListBegin(LinkList *list)
{
    return LinkListIterator(list->node.next);
}

static __inline LinkListIterator linkListEndIter(LinkList *list)
{
    return LinkListIterator(&list->node);
}
