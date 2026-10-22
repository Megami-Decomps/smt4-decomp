#include "shard/Block57f0c4.h"

struct HelpTextureGlobalsView {
    u8 unk00;        // 0x00
    s8 references;   // 0x01
    u8 unk02[2];     // 0x02
    Record57f0c4* record; // 0x04
    void* first;     // 0x08
    void* second;    // 0x0c
};

extern "C" {
void helpReleaseDataTable();
void asdMemFree(void* memory);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void asdTMTexTableFreeEntry(s32 table);

// Release the shared help textures and allocations after the last reference.
void helpTexturesRelease()
{
    HelpTextureGlobalsView* help = (HelpTextureGlobalsView*)&g_buttonHelp;
    --help->references;
    if (help->references <= 0) {
        helpReleaseDataTable();
        asdMemFree(help->first);
        asdMemFree(help->second);
        asdTMTexTableReleaseNode(10, 0);
        asdTMTexTableFreeEntry(10);
        help->references = 0;
    }
}
}
