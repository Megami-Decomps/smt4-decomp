/* Built with -Ospace (see flags_W4Match4b.txt). */
#include "common.h"

extern "C" {

typedef struct MapNode MapNode;

struct MapNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MapNode *parent;
    /* 0x08 */ MapNode *left;
    /* 0x0C */ MapNode *right;
};

typedef struct MapIterator {
    /* 0x0 */ MapNode *node;
} MapIterator;

/* Advances the iterator to the in-order successor in the red-black tree. */
void mapIteratorNext7(MapIterator *it)
{
    MapNode *parent;

    if (it->node->right != NULL) {
        it->node = it->node->right;
        while (it->node->left != NULL) {
            it->node = it->node->left;
        }
    } else {
        parent = it->node->parent;
        while (it->node == parent->right) {
            it->node = parent;
            parent = parent->parent;
        }
        if (it->node->right != parent) {
            it->node = parent;
        }
    }
}

} /* extern "C" */
