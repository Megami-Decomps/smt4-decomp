/* NON_MATCHING: branch-graph loop latch, Unicode predicates and register lifetimes differ from retail. */
#include "text/ConditionalBranchMatcher.h"

extern "C" {
void branchNodeFollowEnabledEdges(BranchMatchState **current, u32 mask);
u32 FUN_0052285c(const BranchMatchTransition *transition, u16 character);
}

static inline bool branchCharacterIsWhitespace(u32 character)
{
    if (character == 0x20) {
        return true;
    }
    if (character < 0x20) {
        return character - 9 <= 4;
    }
    return character == 0x85 || character - 0x2028 < 2 || character == 0x3000;
}

static inline s32 branchLineBreakLength(u16 character, const u16 *text)
{
    switch (character) {
    case '\r':
        return text[1] == '\n' ? 2 : 1;
    case '\n':
    case 0x85:
    case 0x2028:
    case 0x2029:
        return 1;
    default:
        return -1;
    }
}

// Match UTF-16 text by following character, whitespace-boundary and newline edges in the graph.
extern "C" s32 FUN_00433b58(BranchMatchState **current, const BranchMatchRoot *root, const u16 *text)
{
    u32 previousWhitespace = 1;
    *current = root->entry;
    branchNodeFollowEnabledEdges(current, 0x11);
    u16 character = *text;
    while (character != 0) {
        s32 remaining = branchLineBreakLength(character, text);
        if (remaining != -1) {
            branchNodeFollowEnabledEdges(current, 2);
        }
        do {
            u32 whitespace = branchCharacterIsWhitespace(*text);
            branchNodeFollowEnabledEdges(current, whitespace == previousWhitespace ? 8 : 4);
            previousWhitespace = whitespace;
            BranchMatchState *state = *current;
            BranchMatchLink *link = state->children.next;
            u16 matchCharacter = *text;
            for (;;) {
                if (link == &state->children) {
                    return 0;
                }
                BranchMatchEdge *edge = (BranchMatchEdge *)link;
                if (FUN_0052285c(&edge->transition, matchCharacter)) {
                    break;
                }
                link = link->next;
            }
            *current = ((BranchMatchEdge *)link)->transition.target;
            if (remaining != -1 && --remaining == 0) {
                branchNodeFollowEnabledEdges(current, 1);
            }
            character = *++text;
            if (character == 0) {
                break;
            }
        } while (remaining > 0);
    }
    branchNodeFollowEnabledEdges(current, (previousWhitespace ? 8 : 4) | 0x62);
    return (*current)->accepted;
}
