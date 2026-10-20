/* NON_MATCHING: the build folds the walk down the left spine differently: retail copies the right child into a second register (mov r1,r2) and enters the loop at its test, storing in the loop body */
#include "common.h"

extern "C" {

typedef struct MapNode0030b190 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ struct MapNode0030b190 *parent;
    /* 0x08 */ struct MapNode0030b190 *left;
    /* 0x0c */ struct MapNode0030b190 *right;
} MapNode0030b190;

/* Advances a map iterator to the next node in key order (tree successor). */
void mapIteratorNextAlt(MapNode0030b190 **iterator)
{
    MapNode0030b190 *node = *iterator;
    MapNode0030b190 *right = node->right;

    if (right != NULL) {
        *iterator = right;
        while (right = right->left, right != NULL) {
            *iterator = right;
        }
    } else {
        while (1) {
            node = node->parent;
            if (*iterator != node->right) {
                break;
            }
            *iterator = node;
        }
        if ((*iterator)->right != node) {
            *iterator = node;
        }
    }
}

} /* extern "C" */
