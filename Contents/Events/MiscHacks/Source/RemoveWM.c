#include "common-chax.h"

LYN_REPLACE_CHECK(WorldMap_CallBeginningEvent);
void WorldMap_CallBeginningEvent(struct WorldMapMainProc * proc)
{
    Proc_Goto(proc, 25);
}
