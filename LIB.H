/***************************************/
/*		       Class LIB.h	 		 		*/
/*  Compiler version Borland C++ 5.02 	*/
/*         Class Version 1.0		 		*/
/*           28 - 03 - 2006		 		*/
/*      Rosales Perez Jose Noel 	 		*/
/*	  	 thorset2000@yahoo.com.mx	 		*/
/***************************************/

/*Declaracion de Librerias*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <ctype.h>

const int F11=-123, F12=-122, F1=59, F2=60, F3=61, F4=62, F5=63, F6=64, F7=65,
 F8=66, F9=67, F10=68, inicio=71, arriba=72, repag=73, izquierda=75,
 derecha=77, fin=79, abajo=80, avpag=81, insert=82, admiracion =33,
 esc=27, enter=13, enem=164, eneM=165,T0=48, T1=49, T2=50, T3=51,
 T4=52, T5=53, T6=54, T7=55, T8=56, T9=57, TA=65, TB=66, TC=67,
 TD=68, TE=69, TF=70, TG=71, TH=72, TI=73, TJ=74, TK=75, TL=76,
 TM=77, TN=78, TO=79, TP=80, TQ=81, TR=82, TS=83, TT=84, TU=85,
 TV=86, TW=87, TX=88, TY=89, TZ=90, Ta=97, Tb=98, Tc=99, Td=100,
 Te=101, Tf=102,Tg=103, Th=104, Ti=105, Tj=106, Tk=107, Tl=108,
 Tm=109, Tn=110, To=111, Tp=112, Tq=113, Tr=114, Ts=115, Tt=116,
 Tu=117, Tv=118, Tw=119, Tx=120, Ty=121, Tz=122, espacio=32, borrar=8,
 comillas=34, // "
 gato=35,    // #
 moneda=36, // $
 modulo=37,  // %
 amperson=38,  // &
 comilla_simple=39, // '
 abre_parentesis =40, // (
 cierra_parentesis =41, // )
 por=42,  // *
 mas=43,  // +
 coma=44, // ,
 menos=45, // -
 punto=46,  // .
 diagonal=47, // /
 dos_puntos=58, // :
 punto_coma=59, // ;
 menorque=60, // <
 igual=61, // =
 mayorque=62, //>
 cierra_pregunta=63, // ?
 arroba=64; // @
 
 struct COORD{
   int X;
	int Y;
  };

class LIB{
 protected:
  /*Si tu compilador marca error en alguna de estas palbras solo quitale el
    comentario para que funcione ya que lo marca por el tipo de compilador
    puesto que es menor al usado*/

  //enum bool{false, true};

  /*Esta estructura se usa para poder crear las posiciones dentro de la pantalla
    y arrays de los diferentes juegos*/


 public:

 /*Declaracion Para Las Teclas
  Estas Declaraciones se pueden usar para todos los programas siempre y cuando
  se agrege la libreria con anterioridad es algo asi como una variable global
  pero que no se puede cambiar ya su valor*/

   /*Funcion que devuelve el valor de la tecla oprimida*/
  int Teclado(){
   int val=getch();
   if (val == 0 ) return getch();
   else return val;
  }

  /*Funcion que devuelve el valor de la tecla oprimida
    &CoordX = Direccion de memoria de la coordenada en X
    MaxX = Posicion maxima a la que puede llegar X
    MinX = Posicion minima a la que puede llegar X
    MovX = Cuantos espacios se puede mover X
    &CoordY = Direccion de memoria de la coordenada en X
    MaxY = Posicion maxima a la que puede llegar Y
    MinY = Posicion minima a la que puede llegar Y
    MovY = Cuantos espacios se puede mover Y */

  int Teclado(int &CoordX, int MaxX, int MinX, int MovX, int &CoordY, int MaxY, int MinY, int MovY){
   int val=getch();
	if (val == 0 ){
    val=getch();
    switch (val){
	  case arriba:
	   if(CoordY > MinY) CoordY-=MovY;
      else CoordY=MaxY;
     break;
	  case abajo:
		if(CoordY < MaxY) CoordY+=MovY;
      else CoordY=MinY;
     break;
	  case izquierda:
	   if(CoordX > MinX)	CoordX-=MovX;
      else CoordX=MaxX;
     break;
	  case derecha:
	   if(CoordX < MaxX) CoordX+=MovX;
      else CoordX=MinX;
	  break;
	  default: break;
    }
	 return val;
   }else{
	 return val;
   }
  }

  /*Funcion que devuelve el valor de la tecla oprimida
    &CoordX = Direccion de memoria de la coordenada en X
    MaxX = Posicion maxima a la que puede llegar X
    MinX = Posicion minima a la que puede llegar X
    MovX = Cuantos espacios se puede mover X
    &CoordY = Direccion de memoria de la coordenada en X
    MaxY = Posicion maxima a la que puede llegar Y
    MinY = Posicion minima a la que puede llegar Y
    MovY = Cuantos espacios se puede mover Y
    &Fila = Direccion de memoria de la fila del Array
    FilaM = Limite maximo del array en la fila
    Filam = limite minimo del array en la fila
    &Coulmna = Direccion de memoria de la columna del Array
    ColumnaM = Limite maximo del array en la Columna
    Columnam = limite minimo del array en la Columna*/

  int Teclado(int &CoordX, int MaxX, int MinX, int MovX, int &CoordY, int MaxY, int MinY, int MovY,
     			  int &Fila, int FilaM, int Filam, int &Columna, int ColumnaM, int Columnam){
   int val=getch();
	if (val == 0 ){
    val=getch();
    switch (val){
	  case arriba:
	  	if(CoordY > MinY){
       CoordY-=MovY;
       Columna--;
      }else{
       CoordY=MaxY;
       Columna=ColumnaM-1;
      }
     break;
	  case abajo:
	   if(CoordY < MaxY){
       CoordY+=MovY;
       Columna++;
      }else{
       CoordY=MinY;
       Columna=Columnam;
      }
     break;
	  case izquierda:
	  	if(CoordX > MinX){
       CoordX-=MovX;
       Fila--;
      }else{
       CoordX=MaxX;
       Fila=FilaM-1;
      }
     break;
	  case derecha:
	  	if(CoordX < MaxX){
	    CoordX+=MovX;
       Fila++;
      }else{
       CoordX=MinX;
       Fila=Filam;
      }
	  break;
	  default:	break;
    }
	 return val;
   }else{
	 return val;
   }
  }

  /*Funcion que pinta un marco de las dimensiones indicadas por el usuario
    el color y tipo de marco que se desee
    x1 = Posicion inicial del marco en X
    x2 = Posicion final del marco en X
    y1 = Posicion inicial del marco en Y
    y2 = Posicion final del marco en Y
    modo = Estilo del marco
    color = Color del marco*/

  void Marco(int x1, int x2, int y1, int y2, int modo, int color){
   register int i;
	int pared_hor; // pared horizontal del marco
	int pared_ver; // pared vertical del marco
	int esquina_x1; // caracter para esquina superior izquierda
	int esquina_x2; // caracter para esquina superior derecha
	int esquina_y1; // caracter para esquina inferior izquierda
	int esquina_y2; // caracter para esquina inferior derecha
	switch (modo){
    case 1:
	  esquina_x1 = 178;
	  esquina_x2 = 178;
	  esquina_y1 = 178;
	  esquina_y2 = 178;
	  pared_hor = 178;
	  pared_ver = 178;
    break;
	 case 2:
	  esquina_x1 = 219;
	  esquina_x2 = 219;
	  esquina_y1 = 219;
	  esquina_y2 = 219;
	  pared_hor = 219;
	  pared_ver = 219;
    break;
	 case 3:
	  esquina_x1 = 176;
	  esquina_x2 = 176;
	  esquina_y1 = 176;
	  esquina_y2 = 176;
	  pared_hor = 176;
	  pared_ver = 176;
    break;
	 case 4:
	  esquina_x1 = 201;
	  esquina_x2 = 187;
	  esquina_y1 = 200;
	  esquina_y2 = 188;
	  pared_hor = 205;
	  pared_ver = 186;
    break;
	 case 5:
	  esquina_x1 = 218;
	  esquina_x2 = 191;
	  esquina_y1 = 192;
	  esquina_y2 = 217;
	  pared_hor = 196;
	  pared_ver = 179;
    break;
   }
	textcolor(color);
   gotoxy(x1,y1);
	cprintf("%c",esquina_x1);
	gotoxy(x2,y1);
	cprintf("%c",esquina_x2);
	gotoxy(x1,y2);
	cprintf("%c",esquina_y1);
	gotoxy(x2,y2);
	cprintf("%c",esquina_y2);
	for(i = (x1 + 1); i < x2; i++){
	 gotoxy(i,y1);
    cprintf("%c",pared_hor);
	 gotoxy(i,y2);
    cprintf("%c",pared_hor);
   }
	for(i = (y1 + 1); i < y2; i++){
	 gotoxy(x1,i);
	 cprintf("%c",pared_ver);
    gotoxy(x2,i);
	 cprintf("%c",pared_ver);
   }
  }

  /*Funcion que pinta un marco de las dimensiones indicadas por el usuario
   el color y tipo de marco que se desee con la ilusion de ir creciendo
   x1 = Posicion inicial del marco en X
   xMax = Posicion final del marco en X
   y1 = Posicion inicial del marco en Y
   yMax = Posicion final del marco en Y
   modo = Estilo del marco
   color1 = Color del marco
   color2 = Color del fondo para poder borrar*/

  void MarcoCrece(int x1, int xMax, int y1, int yMax, int modo, int color1, int color2){
   int x2=x1;
   int y2=y1--+1;
   Marco(x1,x2,y1,y2,modo,color1);
	do{
	 delay(15);
    Marco(x1,x2,y1,y2,modo,color2);
	 if(x1!=xMax){
	  x1--;
	  x2++;
    }
    Marco(x1,x2,y1,y2,modo,color1);
   }while(x2!=xMax);
   do{
    delay(15);
    Marco(x1,x2,y1,y2,modo,color2);
    if(y1!=yMax){
	  y1--;
	  y2++;
    }
	 Marco(x1,x2,y1,y2,modo,color1);
   }while(y2!=yMax);
  }

  /*Funcion que pinta un marco de las dimensiones indicadas por el usuario
   el color y tipo de marco que se desee con la ilusion de ir creciendo
   x1 = X Media
   x2 = Posicion final del marco en X
   y1 = Y Media
   y2 = Posicion final del marco en Y
   modo = Estilo del marco
   color1 = Color del marco
   color2 = Color del fondo para poder borrar*/

  void MarcoDecrece(int x1, int x2, int xMin, int y1, int y2, int yMin, int modo, int color1, int color2){
   Marco(x1,x2,y1,y2,modo,color1);
   do{
    delay(15);
    Marco(x1,x2,y1,y2,modo,color2);
    if(y1!=yMin){
	  y1++;
	  y2--;
    }
	 Marco(x1,x2,y1,y2,modo,color1);
   }while(y1!=yMin);
	do{
	 delay(15);
    Marco(x1,x2,y1,y2,modo,color2);
	 if(x1!=xMin){
	  x1++;
	  x2--;
    }
    Marco(x1,x2,y1,y2,modo,color1);
   }while(x1!=xMin);
  }
};
