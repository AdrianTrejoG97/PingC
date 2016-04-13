class MoverAsterisco : private LIB {
	public:
   void MAIN(){
    textmode(C4350);
    _setcursortype(_NOCURSOR);
    clrscr();

    int x=16, xb=17, x2=64, yb=25, yi=22, y2i=23, y3i=24, y4i=25, y5i=26, y6i=27, y7i=28;
    int dir = 1, yd=22, y2d=23, y3d=24, y4d=25, y5d=26, y6d=27, y7d=28, mov=0;

  	 int tecla = 0;
   	gotoxy(x,yi);
      cprintf("|");
      gotoxy(x,y2i);
      cprintf("|");
      gotoxy(x,y3i);
      cprintf("|");
      gotoxy(x,y4i);
      cprintf("|");
      gotoxy(x,y5i);
      cprintf("|");
      gotoxy(x,y6i);
      cprintf("|");
      gotoxy(x,y7i);
      cprintf("|");

      gotoxy(x2,yd);
      cprintf("|");
      gotoxy(x2,y2d);
      cprintf("|");
      gotoxy(x2,y3d);
      cprintf("|");
      gotoxy(x2,y4d);
      cprintf("|");
      gotoxy(x2,y5d);
      cprintf("|");
      gotoxy(x2,y6d);
      cprintf("|");
      gotoxy(x2,y7d);
      cprintf("|");

    	for(int mov=0;mov!=100;mov++){
	   	gotoxy(xb,yb);
	      	cprintf(" ");
	   	cprintf("*");
	      	delay(100);
	if(){
			
	}
	if(tecla != null){
		Moveri mover = new Moveri();
		
		+
	}
	switch (dir){
	      	case 1: xb++;  yb--;
	         break;
	         case 2: xb++; yb++;
	         break;
	         case 3: xb--; yb++;
	         break;
	         case 4: xb--; yb--;
	         break;
	      }
      }

   }
   public int comdireccion(dir){
   }

   public int moveri{
   	do{
      	// identifica si se presiono una telca
      	if (kbhit()){
         	gotoxy(x,y);
            cprintf(" ");
            gotoxy(x,y2);
            cprintf(" ");
            gotoxy(x,y3);
            cprintf(" ");
            gotoxy(x,y4);
            cprintf(" ");
            gotoxy(x,y5);
            cprintf(" ");
            gotoxy(x,y6);
            cprintf(" ");
            gotoxy(x,y7);
            cprintf(" ");

            tecla = LIB::Teclado();

            if(xb<=40)
            {
               switch (tecla){
               case arriba: y--; break;
               case abajo: y++; break;
             }
            }
            else{
            switch (tecla){
                case TW:
                break;
               case Tw: break;
               case TS: break;
               case Ts: break;
             }

            }


            gotoxy(x,y);
            cprintf("*");
         	}
      	}while(tecla != esc);}
};
