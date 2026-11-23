/* NON_MATCHING: the remaining-index loop and the 100-byte copy still use a different register schedule. */
#include "network/DataStore/DataStoreMain.h"
#include "util/Random.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

/* A short-lived string produced by the reply (begin/end of its characters). */
struct ReplyString {
    char *begin;
    char *end;
};

extern "C" {
extern const char DAT_00533030[];
void asdMemFree(void *block);
void asdOperatorDelete(void *object);
void asdOperatorDeleteArray(void *array);
s32 FUN_00413e28(DataStoreReply *reply);
void FUN_00413af4(ReplyString *result, DataStoreReply *reply, s32 index);
void *FUN_00414a24(void *reply);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);

/* Once the reply has arrived, pick up to ten random entries from it and store them in the entry table. */
void FUN_003fa2e8(DataStoreWork *work)
{
    if (work->busy == 0) {
        DataStoreReply *reply = work->transfer.reply;
        if (reply == NULL)
            return;
        s32 count = FUN_00413e28(reply);
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
            s32 *out = remaining;
            for (s32 i = 0; i < static_cast<s32>(work->unk4C); i++)
                *out++ = i;
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
                __aeabi_memcpy4(reinterpret_cast<u32 *>(work->entries) + i * 25, entryText, 100);
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
    if (DataStoreReply *reply = work->transfer.reply) {
        asdOperatorDelete(FUN_00414a24(reply));
        work->transfer.reply = 0;
    }
}
}
