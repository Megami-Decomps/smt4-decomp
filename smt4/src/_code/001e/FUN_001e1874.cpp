/* NON_MATCHING: the global base address is loaded after the first call instead of before it. */
#include "common.h"

extern "C" {

typedef struct Workspace {
    /* 0x0000 */ u8 unk0000[0x2460];
    /* 0x2460 */ u8 buffer[0x59C0];
    /* 0x7E20 */ u32 handle;
} Workspace;

typedef struct WorkspaceHolder {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Workspace *workspace;
} WorkspaceHolder;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ void *context;
} Owner;

extern WorkspaceHolder DAT_00439c88;

int FUN_00287188(void *buffer);
int FUN_00291944(void);
int FUN_002b2368(u32 handle);
int asdMemFree(void *block);
int jobStop(void *context, int arg);

/* Tears down the global workspace: releases its buffer and handle, frees it, then frees the owner's context. */
void FUN_001e1874(Owner *owner)
{
    Workspace *workspace;

    FUN_00291944();
    workspace = DAT_00439c88.workspace;
    FUN_00287188(workspace->buffer);
    FUN_002b2368(workspace->handle);
    workspace->handle = 0;
    if (DAT_00439c88.workspace != NULL) {
        asdMemFree(DAT_00439c88.workspace);
        DAT_00439c88.workspace = NULL;
    }
    jobStop(owner->context, 0);
}

} /* extern "C" */
