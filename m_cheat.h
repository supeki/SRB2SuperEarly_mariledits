//      Cheat code checking.

#ifndef __M_CHEAT__
#define __M_CHEAT__

#include "d_event.h"
#include "d_player.h"


//
// CHEAT SEQUENCE PACKAGE
//

#define SCRAMBLE(a) \
((((a)&1)<<7) + (((a)&2)<<5) + ((a)&4) + (((a)&8)<<1) \
 + (((a)&16)>>1) + ((a)&32) + (((a)&64)>>5) + (((a)&128)>>7))

typedef struct
{
    unsigned char*      sequence;
    unsigned char*      p;

} cheatseq_t;

extern player_t *plyr;

int cht_CheckCheat ( cheatseq_t*           cht,
                     char                  key );


void cht_GetParam ( cheatseq_t*           cht,
                    char*                 buffer );

boolean cht_Responder (event_t* ev);

#endif
//-----------------------------------------------------------------------------
//
// $Log:$
//
//-----------------------------------------------------------------------------
