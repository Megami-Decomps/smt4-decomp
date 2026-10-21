/* NON_MATCHING: compiler schedules sentinel pointer stores after zero-state stores. */
#include "common.h"
struct Link {Link *next,*previous;};
struct DualList {Link first;u32 firstCount;Link second;u32 secondCount;u32 firstState,secondState,thirdState;u8 active;};
/* Initializes two empty lists and their state words. */
extern "C" void FUN_00434d9c(DualList *lists){lists->firstCount=0;lists->first.next=&lists->first;lists->secondCount=0;lists->second.next=&lists->second;lists->first.previous=&lists->first;lists->firstState=0;lists->second.previous=&lists->second;lists->secondState=0;lists->thirdState=0;lists->active=0;}
