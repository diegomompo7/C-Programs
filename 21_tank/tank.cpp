#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DELTA_T 0.01 

typedef struct {
    double x;
    double y;
} Coord;

typedef struct{
    Coord pos;
    Coord vel:
    Coord acc;
    Coord dir;
} Movil;

typedef struct {

    Movil cuerpo;
    int vida;
    int ammo;
} player;

void pintar(player jugador [2]){
    mvprintw( LINES - jugador[0] cuerpo pos.y, jugador[0] cuerpo pos.x, "1111111111");
    mvprintw( LINES - jugador[1] cuerpo pos.y, jugador[1] cuerpo pos.x, "2222222222" );

    Coord Preguntar_disparo (int turno){

        Coord resultado;
        double vel, alpha;

        mvprintw(2,2 "Velocidad: ");
        scanw("%lf", &vel);
        mvprintw(2,2 "Angulo: " );
        scanw("%lf" &alpha);
        res.x = vel * cos(alpha /360.);
        res.y = vel * sin(alpha /360. * 2 * M_PI);
        return res;
    }
}
void disparar(Movil bala){
    Coord ini;
    ini = bala.pos;

    do{
      bala.vel.x += bala.acc.x * DELTA_T;
      bala.vel.y += bala.acc.y * DELTA_T;
      bala.pos.x += bala.pel.x * DELTA_T;
      bala.pos.x += bala.pel.x * DELTA_T;  
    }
}


int main(){

    Coord bala.vel;
    Coord bala.pos;
    int turno = 0;

    player [] = {

        {{{5.,0.}{0,0}{0,0}{1,0}}, 100, 20},

        {{{65.,0.}{0,0}{0,0}{-1,0}}, 100, 20}
    }

    initsrc();
    curs_set(0)

      while(1){
          pintar(jugador);
          refresh();
          bala.vel = preguntar_disparo(turno);
          turno++;
          bala.pos = jugador [turno % 2] .cuerpo. pos;
          bala.acc.x = 0.;
          bala.acc.y = 0.;
          disparar bala(Movil Bala);
      };

    return EXIT_SUCCESS;
}
