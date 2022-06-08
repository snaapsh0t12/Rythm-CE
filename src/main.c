#include <ti/getcsc.h>
#include <sys/util.h>
#include <graphx.h>

/*
 *--------------------------------------
 * Program Name:
 * Author:
 * License:
 * Description:
 *--------------------------------------
*/

int main(void)
{
    gfx_Begin();
    uint8_t y;
    // uint24_t i;
    uint8_t i;

    y = 40;
    gfx_SetColor(18);
    for (i = 2; i < 13; i++)
    {
        y += i;
        gfx_FillCircle_NoClip(80, y, i);
        y += i + 3;
    }



    while (!os_GetCSC());
    return 0;
}
