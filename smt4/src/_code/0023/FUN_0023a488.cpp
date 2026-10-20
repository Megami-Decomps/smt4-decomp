/* NON_MATCHING: register allocation only: retail keeps `out` in r4 and `node` in r5 (swapped here) */
/* Fetches the value of a handle's node into *out; returns 0 on success, 1 for a NULL handle, 14 if the node is missing or not ready. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 notReady;
} Record;

typedef struct Node {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 value;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Node *node;
} Owner;

typedef struct Handle {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 ownerId;
} Handle;

extern Owner *FUN_00225c1c(s32 ownerId);
extern Record *FUN_003ea930(Node *node);

u32 FUN_0023a488(Handle *handle, u32 unused, u32 *out)
{
    Owner *owner;
    Node *node;
    Record *record;

    if (handle == NULL) {
        *out = 0;
        return 1;
    }
    owner = FUN_00225c1c(handle->ownerId);
    node = owner->node;
    if (node != NULL && node->value != 0) {
        record = FUN_003ea930(node);
        if (record != NULL && record->notReady == 0) {
            *out = node->value;
            return 0;
        }
    }
    *out = 0;
    return 14;
}

}
