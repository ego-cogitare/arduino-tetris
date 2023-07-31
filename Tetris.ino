const bool PIECES[][4][4][4] = {
  { // SQUARE-piece
    { // 0 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
    },
  },

  { // I-piece
    { // 0 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
    },
    { // 90 - degres
      { 0, 0, 0, 0 },
      { 1, 1, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
    },
    { // 270 - degres
      { 0, 0, 0, 0 },
      { 1, 1, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
  },

  { // T-piece
    { // 0 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 1 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 0, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 0, 1, 0 },
      { 0, 1, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
  },

  { // J-piece
    { // 0 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 1, 0, 0 },
      { 0, 1, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 0, 1, 1 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 1 },
      { 0, 0, 0, 1 },
      { 0, 0, 0, 0 },
    },
  },

  { // L-piece
    { // 0 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 0, 0, 0 },
      { 0, 1, 1, 1 },
      { 0, 1, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 1, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 0, 1 },
      { 0, 1, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
  },

  { // S-piece
    { // 0 - degres
      { 0, 0, 1, 1 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 0, 1 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 0, 1, 1 },
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 0, 1 },
      { 0, 0, 0, 0 },
    },
  },

  { // Z-piece
    { // 0 - degres
      { 0, 1, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 90 - degres
      { 0, 0, 0, 1 },
      { 0, 0, 1, 1 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
    { // 180 - degres
      { 0, 1, 1, 0 },
      { 0, 0, 1, 1 },
      { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
    },
    { // 270 - degres
      { 0, 0, 0, 1 },
      { 0, 0, 1, 1 },
      { 0, 0, 1, 0 },
      { 0, 0, 0, 0 },
    },
  },
};

#define PIECES_COUNT 7
#define ANGLE_0   0
#define ANGLE_90  1
#define ANGLE_180 2
#define ANGLE_270 3

/** Stage dimensions ROWS - heigth, COLS - width */
#define ROWS 16
#define COLS 8

#define CW  +1
#define CCW -1

/** Define control button IO ports constants */
#define PORT_BTN_LEFT  2
#define PORT_BTN_RIGHT 3
#define PORT_BTN_DOWN  4
#define PORT_BTN_CW    8
#define PORT_BTN_CCW   9

#define BTN_LEFT  0
#define BTN_RIGHT 1
#define BTN_DOWN  2
#define BTN_CW    3
#define BTN_CCW   4

/** Stage area */
byte stage[ROWS][COLS];

/** Current score and amount of burned lines */
unsigned long score = 0;
unsigned int lines = 0;

/** Current & next piece and piece angle */
byte piece = 0;
byte nextPiece = 0;
byte angle = 0;
byte nextAngle = 0;

/** Current piece position pieceX = Column offset, pieceY = Row offset */
short curX = 0;
short curY = 0;

/** Current pieces fall delay (ms) depens on current level */
const int LEVEL_DELAY[] = {1000, 800, 650, 500, 350, 250, 175, 150, 125, 100, 80, 64, 48, 40, 32, 24, 16, 12, 8, 4, 2, 1};

/** values between 0 and size of LEVEL_DELAY array */
byte level = 0; 

/** Initial fall deal is 1000 ms */
word fallDelay = LEVEL_DELAY[level];

/**
 * Return bitmast where each bit represents one button state
 *  0 - released
 *  1 - pressed  
 */
byte readButtonStates() {
  /**
  * Bits mapping
  *  0 - Left
  *  1 - Right
  *  2 - Down
  *  3 - Rotate CW
  *  4 - Rotate CCW
  */
  return (digitalRead(PORT_BTN_CCW) << BTN_CCW) 
       | (digitalRead(PORT_BTN_CW) << BTN_CW) 
       | (digitalRead(PORT_BTN_DOWN) << BTN_DOWN) 
       | (digitalRead(PORT_BTN_RIGHT) << BTN_RIGHT) 
       | (digitalRead(PORT_BTN_LEFT) << BTN_LEFT);
}


/** Check individual button state */
bool isBtnPressed(byte btnStates, byte button) {
  return btnStates & (1 << button);
}

byte getRandomPiece() {
  return random(0, PIECES_COUNT);
}

byte getRandomAngle() {
  return random(ANGLE_0, ANGLE_270);
}

void drawStage() {
  /** Draw next piece */
  for (byte row = 0; row < 4; row++) {
    for (byte i = 0; i < COLS; i++) {
      Serial.print("   ");
    }
    for (byte col = 0; col < 4; col++) {
      if (PIECES[nextPiece][nextAngle][row][col] == 0) {
        Serial.print("   ");
      } else {
        Serial.print("[■]");
      }
    }
    Serial.println();
  }

  for (byte row = 0; row < ROWS; row++) {
    Serial.print("|");
    for (byte col = 0; col < COLS; col++) {
      if (stage[row][col] == 0) {
        Serial.print("   ");
        continue;
      }
      Serial.print("[");
      Serial.print("■");
      Serial.print("]");
    }
    if (row == 0) {
      Serial.println("|  Lines: " + String(lines) + " Level: " + String(level));
    } else {
      Serial.println("|");
    }
  }
  Serial.println();
}

byte landPiece(short x, short y, byte color) {
  for (short row = 0; row < 4; row++) {
    for (short col = 0; col < 4; col++) {
      if (stage[y + row][x + col] == 255) {
        stage[y + row][x + col] = color;
      }
    }
  }

  /** Check if there are completed lines */
  byte completedLines = 0;
  for (byte row = ROWS - 1; row > 0; row--) {
    byte rowSerie = 0;
    for (byte col = 0; col < COLS; col++) {
      if (stage[row][col] > 0) {
        rowSerie += 1;
      } else {
        break;
      }
    }

    /** If line is completed */
    if (rowSerie == COLS) {
      completedLines += 1;
      for (byte i = row; i > 1; i--) {
        for (byte j = 0; j < COLS; j++) {
          stage[i][j] = stage[i - 1][j];
        }
      }
      /** As bottom line disapears and  */
      row += 1;
    }
  }

  return completedLines;
}

/** Put new piece at the top position of stage */
bool movePieceAt(byte piece, short fromX, short fromY, byte fromAngle, short toX, short toY, byte toAngle) {
  for (short row = 0; row < 4; row++) {
    for (short col = 0; col < 4; col++) {
      if (PIECES[piece][toAngle][row][col] == 1 && (stage[toY + row][toX + col] > 0 && stage[toY + row][toX + col] < 255 || toY + row > ROWS - 1 || toX + col < 0 || toX + col > COLS - 1)) {
        return false;
      }
    }
  }

  /** Erase piece at old position */
  for (byte row = 0; row < 4; row++) {
    for (byte col = 0; col < 4; col++) {
      if (PIECES[piece][fromAngle][row][col] == 1) {
           stage[fromY + row][fromX + col] = 0;
      }
    }
  }

  /** Paste piece at new position */
  for (short row = 0; row < 4; row++) {
    for (short col = 0; col < 4; col++) {
      if (PIECES[piece][toAngle][row][col] == 1) {
        stage[toY + row][toX + col] = 255;
      }
    }
  }

  return true;
}

byte rotatePiece(short direction) {
  short newAngle = angle + direction;
  if (newAngle > ANGLE_270) {
    return ANGLE_0;
  }
  if (newAngle < ANGLE_0) {
    return ANGLE_270;
  }
  return newAngle;  
}

void newPiece(bool initial = false) {
  if (initial) {
    piece = getRandomPiece();
    angle = getRandomAngle();
  } else {
    piece = nextPiece;
    angle = nextAngle;
  }
  
  /** Generate next piece */
  nextPiece = getRandomPiece();
  nextAngle = getRandomAngle();

  /** Move piece to the top center of the stage */
  curX = (COLS >> 1) - 2;
  curY = 0;

  if (!movePieceAt(piece, curX, curY, angle, curX, curY, angle)) {
    Serial.println("Game OVER!");
    resetGame(3000);
  }
}

void resetGame(int d) {
  delay(d);
  for (short row = 0; row < ROWS; row++) {
    for (short col = 0; col < COLS; col++) {
      stage[row][col] = 0;
    }
  }
  piece = getRandomPiece();
  angle = getRandomAngle();
  curX = (COLS >> 1) - 2;
  curY = 0;
  score = 0;
  lines = 0;
  level = 0;
}

void setup() {
  Serial.begin(500000);
  randomSeed(analogRead(9));
  
  pinMode(PORT_BTN_LEFT, INPUT);
  pinMode(PORT_BTN_RIGHT, INPUT);
  pinMode(PORT_BTN_DOWN, INPUT);
  pinMode(PORT_BTN_CW, INPUT);
  pinMode(PORT_BTN_CCW, INPUT);

  /** Generate very first piece */
  newPiece(true);
}

bool leftPressed = 0;
bool rightPressed = 0;
bool cwPressed = 0;
bool ccwPressed = 0;

void yield() {
  byte buttonStates = readButtonStates();

  if (!cwPressed && isBtnPressed(buttonStates, BTN_CW)) {
    cwPressed = 1;
    byte newAngle = rotatePiece(CW);
    if (movePieceAt(piece, curX, curY, angle, curX, curY, newAngle)) {
      angle = newAngle;
    }
  } else if (!isBtnPressed(buttonStates, BTN_CW)) {
    cwPressed = 0;
  }
  /** Rotate piece counter clock wise */
  if (!ccwPressed && isBtnPressed(buttonStates, BTN_CCW)) {
    ccwPressed = 1;
    byte newAngle = rotatePiece(CCW);
    if (movePieceAt(piece, curX, curY, angle, curX, curY, newAngle)) {
      angle = newAngle;
    }
  } else if (!isBtnPressed(buttonStates, BTN_CCW)) {
    ccwPressed = 0;
  }

  /** Move piece LEFT */
  if (!leftPressed && isBtnPressed(buttonStates, BTN_LEFT)) {
    leftPressed = 1;
    if (movePieceAt(piece, curX, curY, angle, curX - 1, curY, angle)) {
      curX -= 1;
    }
  } else if (!isBtnPressed(buttonStates, BTN_LEFT)) {
    leftPressed = 0;
  }
  /** Move piece RIGHT */
  if (!rightPressed && isBtnPressed(buttonStates, BTN_RIGHT)) {
    if (movePieceAt(piece, curX, curY, angle, curX + 1, curY, angle)) {
      curX += 1;
    }
    rightPressed = 1;
  } else if (!isBtnPressed(buttonStates, BTN_RIGHT)) {
    rightPressed = 0;
  }

  /** Speed up piece falling */
  fallDelay = isBtnPressed(buttonStates, BTN_DOWN) ? LEVEL_DELAY[9] : LEVEL_DELAY[level];
}

// the loop function runs over and over again forever
void loop() {
  /** Draw stage area */
  drawStage();

  /** Piece falling delay depends on current level */
  delay(fallDelay);

  /** If it is possible to place piece one line below then piece not grounded yet */
  if (movePieceAt(piece, curX, curY, angle, curX, curY + 1, angle)) {
    curY += 1;
  } else {
    /** Increment amount of completed lines after after piece is landed */
    lines += landPiece(curX, curY, 1);

    /** After piece is landed we add another random piece to the stage */
    newPiece();

    /** Level will be increased each 10 lines */
    level = score / 10;
  }
}