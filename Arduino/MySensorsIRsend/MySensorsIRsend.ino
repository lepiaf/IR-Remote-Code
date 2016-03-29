#include <MyTransportNRF24.h>
#include <MyHwATMega328.h>
#include <IRremote.h>
#include <MySensor.h>
#include <SPI.h>

#define NODE_ID 3

#define CHILD_ID_TV 1
#define CHILD_ID_HIFI 2
#define CHILD_ID_BBOX 3
#define CHILD_ID_BLURAY 4

IRsend irsend;

MyTransportNRF24 radio(RF24_CE_PIN, RF24_CS_PIN, RF24_PA_LEVEL_GW);  
MyHwATMega328 hw;
MySensor gw(radio, hw);

long tvArr[] = {
  0xE0E040BF,
  0xE0E0807F,
  0xE0E0F00F,
  0xE0E020DF,
  0xE0E0A05F,
  0xE0E0609F,
  0xE0E010EF,
  0xE0E0906F,
  0xE0E050AF,
  0xE0E030CF,
  0xE0E0B04F,
  0xE0E0708F,
  0xE0E08877,
  0xE0E034CB,
  0xE0E0C837,
  0xE0E0E01F,
  0xE0E0D02F,
  0xE0E048B7,
  0xE0E008F7,
  0xE0E0D629,
  0xE0E058A7,
  0xE0E031CE,
  0xE0E0F20D,
  0xE0E0F807,
  0xE0E0D22D,
  0xE0E006F9,
  0xE0E0A659,
  0xE0E046B9,
  0xE0E08679,
  0xE0E016E9,
  0xE0E01AE5,
  0xE0E0B44B,
  0xE0E0FC03,
  0xE0E07C83,
  0xE0E0A45B,
  0xE0E0629D,
  0xE0E0E21D,
  0xE0E052AD,
  0xE0E0A25D,
  0xE0E012ED,
  0xE0E036C9,
  0xE0E028D7,
  0xE0E0A857,
  0xE0E06897
};

long arrBbox[] = {
  0x16D6F00F,
  0x16D648B7,
  0x16D62CD3,
  0x16D60CF3,
  0x16D6D02F,
  0x16D630CF,
  0x16D6D827,
  0x16D638C7,
  0x16D6A857,
  0x16D650AF,
  0x16D628D7,
  0x16D6748B,
  0x16D608F7,
  0x16D658A7,
  0x16D6B04F,
  0x16D6708F,
  0x16D6807F,
  0x16D640BF,
  0x16D6C03F,
  0x16D620DF,
  0x16D6A05F,
  0x16D6609F,
  0x16D6E01F,
  0x16D610EF,
  0x16D6906F,
  0x16D600FF,
  0x16D6847B,
  0x16D614EB,
};

void setup()
{
  gw.begin(incomingMessage, NODE_ID, true);
  gw.sendSketchInfo("IR Remote", "1.0");

  gw.present(CHILD_ID_TV, S_IR);
  gw.present(CHILD_ID_BBOX, S_IR);
}

void loop()
{
  gw.process();
}

void incomingMessage(const MyMessage &message) {
  if (message.sensor == CHILD_ID_TV) {
    Serial.println("TV press");
    irsend.sendSAMSUNG(tvArr[message.getInt()], 32);
    delay(40);
  }

  if (message.sensor == CHILD_ID_BBOX) {
    Serial.println("bbox press");
    irsend.sendNEC(arrBbox[message.getInt()], 32);
    delay(40);
  }
}


