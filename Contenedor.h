class Contenedor : private LIB{
   public:
   void MOVER(){
      int x=10,y=10;
      int xs=70,ys=10;
      int tecla;
      int bar=219;

      for(int i=0;i<10;i++){
      y++;
      gotoxy(x,y);
      printf("%c",bar);
      }

      for(int k=0;k<10;k++){
      ys++;
      gotoxy(xs,ys);
      printf("%c",bar);
      }

      do{
      if(kbhit()){
      //Recoger la ultima posicion y quitar uno :v
   tecla=LIB:: Teclado();
      switch(tecla){
      case arriba:
      gotoxy(x,y+10);
      cprintf(" ");
      y--;
      break;
      case abajo:
      gotoxy(x,y-10);
      cprintf(" ");
      y++;
      break;

      case TW:
      gotoxy(xs,ys+10);
      cprintf(" ");
      ys--;
      break;

      case TS:
      gotoxy(xs,ys-10);
      cprintf(" ");
      ys++;
      break;
     	   }
         gotoxy(x,y);
         printf("%c",bar);
         gotoxy(xs,ys);
         printf("%c",bar);
     	 }
      }while(tecla != esc);
   }
};
