#include "common.h"
struct Options {u8 unk000[304];u16 flags;u16 first,second,third;};
extern "C" {Options *gameGetOptions();
/* Tests whether the enabled option has any nonzero component. */
int FUN_004d9de0(){Options *options=gameGetOptions();return (options->flags&1)!=0 && (options->first!=0||options->second!=0||options->third!=0);}}
