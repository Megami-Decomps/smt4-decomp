/* NON_MATCHING: profile comparisons load halfwords individually instead of retail's packed-word snapshot. */
#include "camp/CampCec/CecProfile.h"
#include "camp/CampCec/CampCecEdit.h"

extern "C" {
extern CampCecEdit *g_campCecEdit;
const CecProfile *gameGetPlayerData(void);

// Detect player identity changes since the StreetPass edit screen was opened.
u32 FUN_003a5094(void)
{
    // Apocalypse's saved profile lies beyond the recovered IV work prefix.
    struct EditProfileView {
        u8 unk000[0x17A];
        CecProfile saved;
    };
    EditProfileView *edit = (EditProfileView *)g_campCecEdit;
    if (edit != NULL) {
        const CecProfile *current = gameGetPlayerData();
        CecProfile saved = edit->saved;
        return current->values[0] != saved.values[0] ||
               current->values[1] != saved.values[1] ||
               current->values[2] != saved.values[2] ||
               current->values[3] != saved.values[3] ||
               current->values[4] != saved.values[4] ||
               current->values[5] != saved.values[5] ||
               current->values[6] != saved.values[6];
    }
    return 0;
}
}
