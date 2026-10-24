/* NON_MATCHING: near miss: only instruction scheduling differs (store of the entry count, the picks/zero stores, the 100-byte copy argument setup) and the final reply reload before the delete. */
#include "network/DataStore/DataStoreMain.h"
#include "AsdSDK/AsdDebug.h"

/* A short-lived string produced by the reply (begin/end of its characters). */
struct ReplyString {
    char *begin;
    char *end;
};

extern "C" {
extern const char DAT_00533030[];
void *asdMemoryAllocTracked(u32, u32, s32, s32, s32);
void asdMemFree(void *block);
void asdOperatorDelete(void *object);
void asdOperatorDeleteArray(void *array);
s32 randRange(u32 maximum);
s32 FUN_00413e28(void);
void FUN_00413af4(ReplyString *result, DataStoreReply *reply, s32 index);
void FUN_00414a24(void);
void rt_memcpy_w(void *dest, const void *src, u32 size);

/* Once the reply has arrived, pick up to ten random entries from it and store them in the entry table. */
void FUN_003fa2e8(DataStoreWork *work)
{
    if (work->busy == 0) {
        if (work->transfer.reply == 0)
            return;
        s32 count = FUN_00413e28();
        work->unk4C = count;
        if (count > 0) {
            asdDebugTrace(DAT_00533030, 0x2AE);
            work->entries = reinterpret_cast<s32>(asdMemoryAllocTracked(0x100, 0x100, 0, 1000, 1));
            asdDebugTrace(DAT_00533030, 0x2B3);
            char *entryText = static_cast<char *>(asdMemoryAllocTracked(0x100, 0x100, 0, 100, 1));
            s32 picks = 10;
            if (static_cast<s32>(work->unk4C) < 10)
                picks = work->unk4C;
            work->unk50 = 0;
            asdDebugTrace(DAT_00533030, 0x2BE);
            s32 *remaining = static_cast<s32 *>(asdMemoryAllocTracked(0x100, 0x100, 0, work->unk4C << 2, 1));
            for (s32 i = 0; i < static_cast<s32>(work->unk4C); i++)
                remaining[i] = i;
            asdDebugTrace(DAT_00533030, 0x2C5);
            s32 *chosen = static_cast<s32 *>(asdMemoryAllocTracked(0x100, 0x100, 0, picks << 2, 1));
            s32 left = work->unk4C;
            for (s32 i = 0; i < picks; i++) {
                s32 index = randRange(static_cast<u16>(left - 1));
                chosen[i] = remaining[index];
                for (s32 j = index; j < left - 1; j++)
                    remaining[j] = remaining[j + 1];
                left--;
            }
            for (s32 i = 0; i < picks; i++) {
                ReplyString text;
                FUN_00413af4(&text, work->transfer.reply, chosen[i]);
                s32 length = 0;
                for (char *p = text.begin; p != text.end; p++)
                    entryText[length++] = *p;
                rt_memcpy_w(reinterpret_cast<u32 *>(work->entries) + i * 25, entryText, 100);
                asdOperatorDeleteArray(text.begin);
            }
            if (remaining != 0)
                asdMemFree(remaining);
            if (chosen != 0)
                asdMemFree(chosen);
            if (entryText != 0)
                asdMemFree(entryText);
            work->unk50 = picks;
        }
        work->ready = 1;
    }
    if (work->transfer.reply != 0) {
        FUN_00414a24();
        asdOperatorDelete(work->transfer.reply);
        work->transfer.reply = 0;
    }
}
}
