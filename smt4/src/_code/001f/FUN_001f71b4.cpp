#include "common.h"

extern "C" {

int geometryDestroy(void);
int handleBlockUnref(void);
int handleBlockRefDrop(void);
int objectBufferFree(u32 value);
int resourceListDestroy(u32 value);
int resourceDestroy(u32 value);
int asdMemFree(u32 ptr);

typedef struct Parent {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 count;
} Parent;

typedef struct Resources {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[0xA];
    /* 0x0E */ u8 flags;
    /* 0x0F */ u8 unk0F[0x25];
    /* 0x34 */ u32 listA;
    /* 0x38 */ u32 bufferA;
    /* 0x3C */ u32 listB;
    /* 0x40 */ u32 bufferB;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 unk48;
    /* 0x4C */ Parent *parent;
    /* 0x50 */ u32 unk50;
} Resources;

/* Releases everything the resource group owns, then the group itself. */
void FUN_001f71b4(Resources *res)
{
    u32 i;
    u32 count;

    if (res->bufferA != 0) {
        if (res->parent != NULL) {
            count = res->parent->count;
        } else {
            count = res->count;
        }
        for (i = 0; i < count; i++) {
            resourceDestroy(((u32 *)res->listA)[i]);
        }
        asdMemFree(res->bufferA);
    }
    if (res->bufferB != 0) {
        if (res->parent != NULL) {
            count = res->parent->count;
        } else {
            count = res->count;
        }
        for (i = 0; i < count; i++) {
            resourceListDestroy(((u32 *)res->listB)[i]);
        }
        asdMemFree(res->bufferB);
    }
    if (res->unk44 != 0) {
        handleBlockRefDrop();
    }
    if (res->unk48 != 0) {
        handleBlockUnref();
    }
    if ((res->flags & 1) != 0) {
        objectBufferFree((u32)res->parent);
    }
    if (res->unk50 != 0) {
        geometryDestroy();
    }
    asdMemFree((u32)res);
}

} /* extern "C" */
