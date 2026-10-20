/* Tail call into the function that follows (reads the file info of the reader at +4). */
#include "common.h"

extern "C" {

void nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(void *reader, void *a, void *b, u32 c);

struct Obj00152314 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *reader;
};

void FUN_00152314(Obj00152314 *o, void *a, void *b)
{
    nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(o->reader, a, b, 0);
}

}
