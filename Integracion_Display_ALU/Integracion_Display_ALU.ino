int w = 0, x = 0, y = 0, z = 0;

int Entrada, Salida, Pin;
// DISPLAY
  // A -> 7
  // B -> 8
  // C -> 9
  // D -> 10
  // E -> 11
  // F -> 12
  // G -> 13

void setup() {
  //Pines de entrada para W, X, Y, Z (botones)
  for (Entrada = 2 ; Entrada <= 5 ; Entrada++){
    pinMode(Entrada, INPUT); 
  }
  //Pines de salida (7 pines)
  for (Salida = 7 ; Salida <= 13 ; Salida++){
    pinMode(Salida, OUTPUT); 
  }
  
}

void loop() {

  w = digitalRead(2);
  x = digitalRead(3);
  y = digitalRead(4);
  z = digitalRead(5);
  //CERO
  if ((!z && !y && !x && !w)) {
    Cero();
  }
  // UNO
  if ((!z && !y && !x && w)) {
    Uno();
  }
  // DOS
  if ((!z && !y && x && !w)) {
    Dos();
  }
  // TRES
  if ((!z && !y && x && w)) {
    Tres();
  }
  // CUATRO
  if ((!z && y && !x && !w)) {
    Cuatro();
  }
  // CINCO
  if ((!z && y && !x && w)) {
    Cinco();
  }
  // SEIS
  if ((!z && y && x && !w)) {
    Seis();
  }
  // SIETE
  if ((!z && y && x && w)) {
    Siete();
  }
  // OCHO
  if ((z && !y && !x && !w)) {
    Ocho();
  }
  // NUEVE
  if ((z && !y && !x && w)) {
    Nueve();
  }

  // A
  if ((z && !y && x && !w)) {
    A();
  }
  // B
  if ((z && !y && x && w)) {
    B();
  }
  // C
  if ((z && y && !x && !w)) {
    C();
  }
  // D
  if ((z && y && !x && w)) {
    D();
  }
  // E
  if ((z && y && x && !w)) {
    E();
  }
  // F
  if ((z && y && x && w)) {
    Efe();
  }
  
  // PARA QUE LOS LED VUELVAN A SU ESTADO OFF
  for (Pin = 13 ; Pin >= 7 ; Pin--){
    digitalWrite(Pin, LOW);
  }

}
//   Funciones
void Cero(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
}

void Uno(){
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
}

void Dos(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(13, HIGH); //G
  digitalWrite(11, HIGH); //E
  digitalWrite(10, HIGH); //D
}

void Tres(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(13, HIGH); //G
}

void Cuatro(){
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void Cinco(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void Seis(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void Siete(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
}

void Ocho(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void Nueve(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void A(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void B(){
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void C(){
  digitalWrite(7, HIGH); //A
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
}

void D(){
  digitalWrite(8, HIGH); //B
  digitalWrite(9, HIGH); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(13, HIGH); //G
}

void E(){
  digitalWrite(7, HIGH); //A 
  digitalWrite(10, HIGH); //D
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}

void Efe(){
  digitalWrite(7, HIGH); //A
  digitalWrite(11, HIGH); //E
  digitalWrite(12, HIGH); //F
  digitalWrite(13, HIGH); //G
}