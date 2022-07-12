#define BUZ_PIN 9 //부저 연결핀

#define DO 261
#define RE 293
#define MI 329
#define FA 349
#define SO 391
#define LA 440
#define TI 493
#define DO5 523

#define DELAY 125
#define DURATION 
int music[] = {SO, MI, MI, SO, MI, DO, RE, MI, RE, DO, MI, SO,
              DO5, SO, DO5, SO, DO5, SO, MI, SO, RE, FA, MI, RE, DO};
int dur[]={ 4, 2, 2, 2, 2, 4, 4, 2, 2, 2, 2, 4,
            3, 1, 2, 2, 2, 2, 4, 4, 2, 2, 2, 2, 4};
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  music_play();
}

void music_play(){
  for(int i=0; i<sizeof(music)/sizeof(int); i++){
    tone(BUZ_PIN,music[i], 50*dur[i]);
    delay(DELAY*dur[i]);
  }
}
  
