/* NON_MATCHING: returns the rank-label text for a ranking table id (0x55-0x68 are fixed Shift-JIS strings kept in the function's literal pool, 0x3e is a block of the save data, 0x6a and above has none, everything else is looked up in data table 0x38); the compare chain, literal strings and out-of-line save-block return match retail, but retail copies the id into r4 only on the table-search path (after the compares) and stores the key after the table calls, the build stores it first and uses r4/r5 differently (116 vs 112 bytes of stack, one fewer pushed register) */
#include "common.h"

#define RANK_LABEL_SAVE_BLOCK 0x3E
#define RANK_LABEL_SAVE_OFFSET 0x22220
#define RANK_LABEL_LAST_ID 0x69
#define RANK_LABEL_TABLE 0x38

struct RankLabelSave {
    /* 0x00000 */ u8 unk00000[RANK_LABEL_SAVE_OFFSET];
    /* 0x22220 */ u16 block[1];
};

/* A record of data table 0x38 (0x68 bytes); `id` at 0 is the search key and the label follows it. */
struct RankLabelRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 label[0x33];
};

extern "C" {
extern RankLabelSave *DAT_0057f69c;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 arrayCompareSignedHalfword(const void *a, const void *b);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

u16 *FUN_00261468(u32 id)
{
    u16 *label;

    if (id >= RANK_LABEL_LAST_ID + 1) {
        label = NULL;
    } else {
        if (id == RANK_LABEL_SAVE_BLOCK)
            return DAT_0057f69c->block;
        if (id == 0x55)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\120\202\223\202\224\201\100\201\151\202\140\201\152";   /* 　　　　　　　　１ｓｔ　（Ａ） */
        else if (id == 0x56)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\121\202\216\202\204\201\100\201\151\202\140\201\152";   /* 　　　　　　　　２ｎｄ　（Ａ） */
        else if (id == 0x57)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\141\201\152";   /* 　　　　　　　　３ｒｄ　（Ｂ） */
        else if (id == 0x58)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\123\202\224\202\210\201\100\201\151\202\140\201\152";   /* 　　　　　　　　４ｔｈ　（Ａ） */
        else if (id == 0x5A)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\123\202\224\202\210\201\100\201\151\202\162\201\152";   /* 　　　　　　　　４ｔｈ　（Ｓ） */
        else if (id == 0x5B)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\120\202\223\202\224\201\100\201\151\202\142\201\152";   /* 　　　　　　　　１ｓｔ　（Ｃ） */
        else if (id == 0x5C)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\120\202\223\202\224\201\100\201\151\202\146\201\152";   /* 　　　　　　　　１ｓｔ　（Ｇ） */
        else if (id == 0x5D)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\121\202\216\202\204\201\100\201\151\202\142\201\152";   /* 　　　　　　　　２ｎｄ　（Ｃ） */
        else if (id == 0x5E)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\121\202\216\202\204\201\100\201\151\202\145\201\152";   /* 　　　　　　　　２ｎｄ　（Ｆ） */
        else if (id == 0x5F)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\121\202\216\202\204\201\100\201\151\202\153\201\152";   /* 　　　　　　　　２ｎｄ　（Ｌ） */
        else if (id == 0x60)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\142\201\152";   /* 　　　　　　　　３ｒｄ　（Ｃ） */
        else if (id == 0x61)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\143\201\152";   /* 　　　　　　　　３ｒｄ　（Ｄ） */
        else if (id == 0x62)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\144\201\152";   /* 　　　　　　　　３ｒｄ　（Ｅ） */
        else if (id == 0x63)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\145\201\152";   /* 　　　　　　　　３ｒｄ　（Ｆ） */
        else if (id == 0x64)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\123\202\224\202\210\201\100\201\151\202\142\201\152";   /* 　　　　　　　　４ｔｈ　（Ｃ） */
        else if (id == 0x65)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\123\202\224\202\210\201\100\201\151\202\144\201\152";   /* 　　　　　　　　４ｔｈ　（Ｅ） */
        else if (id == 0x66)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\123\202\224\202\210\201\100\201\151\202\145\201\152";   /* 　　　　　　　　４ｔｈ　（Ｆ） */
        else if (id == 0x67)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\120\202\223\202\224\201\100\201\151\202\147\201\152";   /* 　　　　　　　　１ｓｔ　（Ｈ） */
        else if (id == 0x68)
            label = (u16 *)"\201\100\201\100\201\100\201\100\201\100\201\100\201\100\201\100\202\122\202\222\202\204\201\100\201\151\202\146\201\152";   /* 　　　　　　　　３ｒｄ　（Ｇ） */
        else {
            RankLabelRecord key;
            key.id = id;
            u32 table = dataTableGet(RANK_LABEL_TABLE, 0);
            void *entries = dataTableGetEntries(table);
            u32 count = dataTableGetCount(table);
            RankLabelRecord *record = (RankLabelRecord *)libc_bsearch(&key, entries, count, sizeof(RankLabelRecord), arrayCompareSignedHalfword);
            label = record->label;
        }
    }
    return label;
}

} /* extern "C" */
