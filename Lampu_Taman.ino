//Membuat Lampu Taman
void setup() {
  Serial.begin (9600); //inisialisasi serial 9600bps
  pinMode (7, OUTPUT); //Output analog (PWM)
  pinMode (A0, INPUT); //Input analog
}
int batasNyala=50;

void loop() {
  int tegAnalog=analogRead(A0); //baca teg analog pd pinA0
  Serial.println (tegAnalog); //kirim hasil baca ke serial
  tegAnalog=map (tegAnalog,0,1023,0,255);//maping rentang data
  if (tegAnalog<=batasNyala){ //kalau LDR mendapat gelap
    digitalWrite(7, HIGH); //nyalakan LED
  }
  else {
    digitalWrite (7, LOW);
  }
  delay (100); //jeda beberapa saat
}
