int pins[17] ={-1, 13, 12 ,11 ,10, 9, 8, 7, 6, 5, 4, 3, 2, A2, A3, A4, A5};
int cols[8]={pins[13],pins[3],pins[4],pins[10], pins[6], pins[11], pins[15], pins[16]};
int rows[8]={pins[9], pins[14], pins[8], pins[12], pins[1], pins[7], pins[2], pins[5]};

int K[8][8]  {
    {0, 1, 0, 0, 0, 1, 0, 0}, 
    {0, 1, 0, 0, 1, 0, 0, 0}, 
    {0, 1, 0, 1, 0, 0, 0, 0}, 
    {0, 1, 1, 0, 0, 0, 0, 0}, 
    {0, 1, 1, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 1, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 1, 0, 0}  
} ;

int A[8][8]  {
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 1, 1, 1, 1, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}  
} ;

int E[8][8]  {
    {0, 1, 1, 1, 1, 1, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 1, 1, 1, 1, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 1, 1, 1, 1, 1, 0}  
} ;

int N[8][8] { 
    {0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0},
};

int O[8][8] = { 
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}  
} ;

int U[8][8] { 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 1, 1, 1, 1, 0, 0}  
} ;

int I[8][8] { 
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
};

int T[8][8] { 
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
};

int W[8][8] { 
    {1, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 1, 0, 0},
    {0, 1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
};

int R[8][8] { 
    {0 ,1, 1, 1, 1, 1, 0, 0},
    {0 ,1, 0, 0, 0, 1, 0, 0},
    {0 ,1, 0, 0, 0, 1, 0, 0},
    {0 ,1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0},
};

int V[8][8] { 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}  
} ;

int G[8][8] { 
    {0, 0, 0, 1, 1, 1, 0, 0}, 
    {0, 0, 1, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 1, 1, 1, 0}, 
    {0, 0, 1, 0, 0, 0, 1, 0}, 
    {0, 0, 1, 0, 0, 1, 1, 0}, 
    {0, 0, 0, 1, 1, 0, 1, 0}  
} ;

int S[8][8] { 
    {0, 0, 1, 1, 1, 1, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 1, 1, 1, 1, 0, 0}, 
    {0, 0, 1, 1, 1, 1, 1, 0}, 
    {0, 0, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 1, 1, 1, 1, 0, 0}  
} ;

int Y[8][8] { 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}, 
    {0, 0, 0, 1, 1, 0, 0, 0}  
} ;

void setup() {
  // put your setup code here, to run once:
  for(int idx=1; idx<=16; idx++)
    pinMode(pins[idx], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    dotK();
    dotA();
    dotN();
    dotG();
    dotW();
    dotO();
    dotN();
    dotU();
    dotN();
    dotI();
    dotV();
    dotE();
    dotR();
    dotS();
    dotI();
    dotT();
    dotY();
}

void allOff(){
  for(int i=0; i<8; i++){
    digitalWrite(rows[i],LOW);
    digitalWrite(cols[i], HIGH);
  }
}

void allON(){
  for(int i=0; i<8; i++){
    digitalWrite(rows[i],HIGH);
    digitalWrite(cols[i], LOW);
  }
}

void dot(int rowi, int coli){
  for(int i=0; i<8; i++){
    (rowi ==i)? digitalWrite(rows[i], !LOW): digitalWrite(rows[i], LOW);
    (coli ==i)? digitalWrite(cols[i], LOW): digitalWrite(cols[i], !LOW);
  }
}

void dotO(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (O[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}


void dotN(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (N[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotU(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (U[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotI(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (I[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotE(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (E[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotW(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (W[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotR(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (R[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotK(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (K[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotA(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (A[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotV(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (V[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotG(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (G[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotT(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (T[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotS(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (S[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}

void dotY(){
  for(int z=0; z<500; z++){
    for(int i=0; i<8; i++){
     digitalWrite(rows[i], HIGH);
      for(int j=0; j<8; j++){
        (Y[i][j] ==1)? digitalWrite(cols[j], LOW): digitalWrite(cols[j], !LOW);
      }
     allOff();

   }
  }
}
