#include "shard/Shard004B.h"

struct ScriptEntryName {
    u8 unk00[0x20];
    char name[1];
};
struct ScriptEntryLaunchWork {
    u8 unk0000[0x28];
    u32 state;
    u32 frame;
    u8 unk0030[0x6c];
    Menu4C menu;
    u32 unk1114;
    ScriptEntryName* entry;
    u8 unk111c[0xc];
    u32 tableGroup;
    u32 unk112c;
    u32 scriptJob;
};

extern "C" {
s32 FUN_004ba698(Menu4C* menu);
s32 textFormatBuffer(u8* destination, const char* format, ...);
u32 tableGroupFindEntryIndex(u32 group, const u8* name);
s32 scrScriptProcessStartEntry(u32 job, u32 entry);

void menuScriptLaunchNamedEntryWhenReady(ScriptEntryLaunchWork* work)
{
    u8 name[36];
    if (FUN_004ba698(&work->menu)) {
        textFormatBuffer(name, "%s", work->entry->name);
        u32 index = tableGroupFindEntryIndex(work->tableGroup, name);
        scrScriptProcessStartEntry(work->scriptJob, index);
        work->state = 4;
        work->frame = 0;
    }
}
}
