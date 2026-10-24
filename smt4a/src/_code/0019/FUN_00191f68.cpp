/* NON_MATCHING: releases the pooled blocks of a record (26 length words cleared, 31 heap blocks freed); written from the decompilation, store/branch scheduling not compared with retail */
#include "common.h"

/* Tail of an object that keeps its tables as (count, heap block) pairs. */
struct PooledTables {
    /* 0x000 */ u8 unk000[0x35C];
    /* 0x35C */ u32 count35c;
    /* 0x360 */ void *data360;
    /* 0x364 */ u32 count364;
    /* 0x368 */ void *data368;
    /* 0x36C */ u32 count36c;
    /* 0x370 */ void *data370;
    /* 0x374 */ u32 count374;
    /* 0x378 */ void *data378;
    /* 0x37C */ u32 count37c;
    /* 0x380 */ void *data380;
    /* 0x384 */ u32 count384;
    /* 0x388 */ void *data388;
    /* 0x38C */ u32 count38c;
    /* 0x390 */ void *data390;
    /* 0x394 */ u32 count394;
    /* 0x398 */ void *data398;
    /* 0x39C */ u32 count39c;
    /* 0x3A0 */ void *data3a0;
    /* 0x3A4 */ void *data3a4;
    /* 0x3A8 */ u32 count3a8;
    /* 0x3AC */ void *data3ac;
    /* 0x3B0 */ void *data3b0;
    /* 0x3B4 */ u32 count3b4;
    /* 0x3B8 */ void *data3b8;
    /* 0x3BC */ void *data3bc;
    /* 0x3C0 */ u32 count3c0;
    /* 0x3C4 */ void *data3c4;
    /* 0x3C8 */ void *data3c8;
    /* 0x3CC */ u32 count3cc;
    /* 0x3D0 */ void *data3d0;
    /* 0x3D4 */ void *data3d4;
    /* 0x3D8 */ u32 count3d8;
    /* 0x3DC */ void *data3dc;
    /* 0x3E0 */ void *data3e0;
    /* 0x3E4 */ u32 count3e4;
    /* 0x3E8 */ void *data3e8;
    /* 0x3EC */ u32 count3ec;
    /* 0x3F0 */ void *data3f0;
    /* 0x3F4 */ u32 count3f4;
    /* 0x3F8 */ void *data3f8;
    /* 0x3FC */ u32 count3fc;
    /* 0x400 */ void *data400;
    /* 0x404 */ u32 count404;
    /* 0x408 */ void *data408;
    /* 0x40C */ u32 count40c;
    /* 0x410 */ void *data410;
    /* 0x414 */ u32 count414;
    /* 0x418 */ void *data418;
    /* 0x41C */ u32 count41c;
    /* 0x420 */ u8 unk420[0x4];
    /* 0x424 */ u32 count424;
    /* 0x428 */ void *data428;
    /* 0x42C */ u32 count42c;
    /* 0x430 */ void *data430;
    /* 0x434 */ u32 count434;
    /* 0x438 */ void *data438;
    /* 0x43C */ u32 count43c;
    /* 0x440 */ void *data440;
};

extern "C" {
void asdOperatorDeleteB(void *block);

static __inline void pooledBlockRelease(void **block)
{
    if (*block != NULL) {
        asdOperatorDeleteB(*block);
        *block = NULL;
    }
}

/* Clears every table's count and frees its heap block. */
void FUN_00191f68(PooledTables *tables)
{
    tables->count35c = 0;
    tables->count364 = 0;
    tables->count36c = 0;
    tables->count374 = 0;
    tables->count37c = 0;
    tables->count384 = 0;
    tables->count38c = 0;
    tables->count394 = 0;
    tables->count39c = 0;
    tables->count3a8 = 0;
    tables->count3b4 = 0;
    tables->count3c0 = 0;
    tables->count3cc = 0;
    tables->count3d8 = 0;
    tables->count3e4 = 0;
    tables->count3ec = 0;
    tables->count3f4 = 0;
    tables->count3fc = 0;
    tables->count404 = 0;
    tables->count40c = 0;
    tables->count414 = 0;
    tables->count41c = 0;
    tables->count424 = 0;
    tables->count42c = 0;
    tables->count434 = 0;
    tables->count43c = 0;
    pooledBlockRelease(&tables->data360);
    pooledBlockRelease(&tables->data368);
    pooledBlockRelease(&tables->data370);
    pooledBlockRelease(&tables->data378);
    pooledBlockRelease(&tables->data380);
    pooledBlockRelease(&tables->data388);
    pooledBlockRelease(&tables->data390);
    pooledBlockRelease(&tables->data398);
    pooledBlockRelease(&tables->data3a0);
    pooledBlockRelease(&tables->data3a4);
    pooledBlockRelease(&tables->data3ac);
    pooledBlockRelease(&tables->data3b0);
    pooledBlockRelease(&tables->data3b8);
    pooledBlockRelease(&tables->data3bc);
    pooledBlockRelease(&tables->data3c4);
    pooledBlockRelease(&tables->data3c8);
    pooledBlockRelease(&tables->data3d0);
    pooledBlockRelease(&tables->data3d4);
    pooledBlockRelease(&tables->data3dc);
    pooledBlockRelease(&tables->data3e0);
    pooledBlockRelease(&tables->data3e8);
    pooledBlockRelease(&tables->data3f0);
    pooledBlockRelease(&tables->data3f8);
    pooledBlockRelease(&tables->data400);
    pooledBlockRelease(&tables->data408);
    pooledBlockRelease(&tables->data410);
    pooledBlockRelease(&tables->data418);
    pooledBlockRelease(&tables->data428);
    pooledBlockRelease(&tables->data430);
    pooledBlockRelease(&tables->data438);
    pooledBlockRelease(&tables->data440);
}

} /* extern "C" */
