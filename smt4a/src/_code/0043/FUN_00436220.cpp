/* NON_MATCHING: stack slots and r5/r6 differ: retail puts the copied key at sp+0 (name at sp+4, node at sp+8), as for a temporary built at the call. */
#include "common.h"

namespace {
struct ParseToken {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ParseToken *next;
};

struct ParseCursor {
    /* 0x00 */ ParseToken *token;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 context;
};

struct ParseNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 key[8];
    /* 0x10 */ u8 value[1];
};

struct ParseScope {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 children[1];
};
}

extern "C" {

void FUN_004352b0(u32 *name, ParseCursor *cursor);
void FUN_00515618(ParseNode **node, void *children);
void variantSetWordB(void *variant, u32 *word, u32 context);
s32 FUN_00435318(ParseCursor *cursor, void *value);

/* Parse one "name value" entry into a new child of the scope; returns 0 on success, 2 when the name or the node is missing. */
s32 FUN_00436220(ParseCursor *cursor, u32 *nameOut, ParseScope **scope)
{
    u32 name;
    ParseNode *node;
    u32 key;
    s32 error;

    FUN_004352b0(&name, cursor);
    if (name == 0) {
        return 2;
    }
    FUN_00515618(&node, (*scope)->children);
    if (node == NULL) {
        return 2;
    }
    key = name;
    variantSetWordB(node->key, &key, cursor->context);
    cursor->token = cursor->token->next;
    error = FUN_00435318(cursor, node->value);
    if (error != 0) {
        return error;
    }
    *nameOut = name;
    cursor->token = cursor->token->next;
    return 0;
}

} /* extern "C" */
