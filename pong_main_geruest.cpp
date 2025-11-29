// Datei: pong_main_geruest.cpp

#define CIMGGIP_MAIN
#include "CImgGIP08.h"

int main()
{
    // Für das "blaue Spielfeld" ...
    const unsigned int x0 = 100, y0 = 100;
    const unsigned int x1 = 500, y1 = 500;
    // Für Position und Ausdehnung des weißen Balls ...
    unsigned int xb = 320, yb = 300;
    const unsigned int ball_size = 10;
    // Geschwindigkeit des Balls ...
    int delta_x = -3, delta_y = -3;
    // Ausdehnung und Position des Schlaegers ...
    const unsigned int schlaeger_size_x = 50, schlaeger_size_y = 20;
    unsigned int xs = 300, ys = y1 - schlaeger_size_y;
    bool v=true,v2=true;
    gip_white_background();
    while (gip_window_not_closed() && (yb+ball_size)<=y1 )
    {
        
        // Später nötig, damit die Graphik "schneller" wird …
        // gip_stop_updates();

        // Blaues "Spielfeld" neu zeichnen ...
        gip_draw_rectangle(x0,y0,x1,y1,blue);
        // Ball zeichnen ...
       gip_draw_rectangle(xb,yb,xb+ball_size,yb+ball_size,white);
        // Schlaeger zeichnen ...
        gip_draw_rectangle(xs,ys,xs+schlaeger_size_x,ys+schlaeger_size_y,white);

        xs=gip_mouse_x();
        // Schlaeger verschieben ...

        // Falls der Schläger außerhalb des Spielfelds => zurücksetzen ...

        // Ball-Kollisionen mit dem Rand ...

        // Kollision mit Schlaeger ...

        // Unterer Rand erreicht => Abbruch

        // Bewege Ball ...

    //     if (yb>y0 && xb>x0 && v)
    //     {
    //         /* code */
    //         yb+=delta_y;
    //         xb+=delta_x;

    //     }

    //    else {

    //         v=false;
    //         yb-=delta_y;

    //         if (yb>=y1)
    //         {
    //             v=true;
    //         }
    //         if(xb>=x0){
    //             xb+=delta_x;
    //         }
    //         else{
    //             xb-=delta_x;
    //             v=true;
    //         }
            
    //     }
//--------------------------------------------------------------------------//


        //premiere fois il va vers haut v te9lb meli ken tel3 yahbet condition:  wa9teli y de ball > 7it fouguani
        if (yb>y0 && v)
        {
            //l koura tatl3 me3neha na9sou mel yb 
            yb+=delta_y;
           
            //el xb dima bin el x0 wel x1
            //mara loula el xb bch tab9a dima akber mel x0
            // taw nektbo el condition te3na (kif yetl3 w ymess el Left border yab9a tale3 ama yatle3 3al imin)
            if(xb>x0 && v2){
                // yatle33 f jihet el isar
                 xb+=delta_x;
                
            }
            else{
                //kif ymes el x0 yeglb ywli tale3 fi jihet el imin
                v2=false;
                xb-=delta_x;
                if (xb>=x1)
                {
                    v2=true;
                }
                
            }
            

        }
        else if((yb+ball_size)<y1){
            if ((( (xb>=xs && xb <=xs+schlaeger_size_x) && (yb+ball_size>=ys))))
            {
                v=true;
            }
            
            else{
                            v= false;
            yb-=delta_y;
           
            //el xb dima bin el x0 wel x1
            //mara loula el xb bch tab9a dima akber mel x0
            // taw nektbo el condition te3na (kif yetl3 w ymess el Left border yab9a tale3 ama yatle3 3al imin)
            if(xb>x0 && v2){
                // yatle33 f jihet el isar
                 xb+=delta_x;
                
            }
            else{
                //kif ymes el x0 yeglb ywli tale3 fi jihet el imin
                v2=false;
                xb-=delta_x;
                if (xb>=x1)
                {
                    v2=true;
                }
                
            }
            
        }
            }

        else{
            // kif ymes el loutani el v twali true w ekaka y3awed tatle3 lfoug el kora
            v=true;
        }

        



        // Später nötig, damit die Graphik "schneller" wird …
        gip_start_updates();

        // Später nötig, wenn die Graphik "schneller gestellt" ist …
        // Etwas Pause, damit das Spiel nicht zu schnell läuft ...
       // gip_wait(50);
    }
    return 0;
}
