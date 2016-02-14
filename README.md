# IR Remote Code 

IR code from multiple remote. Can be used to build arduino ir remote.

Code for remotes:
* AA59-00741A 
* AK59-00149A
* RM-SMR1
* BBox remote (Bouygue Telecom BBox télécommande)

Can be used with https://github.com/z3t0/Arduino-IRremote

| Référence   | Appareil               | Bouton         | Type    | Bits | Code       | 
|-------------|------------------------|----------------|---------|------|------------| 
| AA59-00741A | Samsung TV             | on/off         | SAMSUNG | 32   | 0xE0E040BF | 
| AA59-00741A | Samsung TV             | source         | SAMSUNG | 32   | 0xE0E0807F | 
| AA59-00741A | Samsung TV             | mute           | SAMSUNG | 32   | 0xE0E0F00F | 
| AA59-00741A | Samsung TV             | 1              | SAMSUNG | 32   | 0xE0E020DF | 
| AA59-00741A | Samsung TV             | 2              | SAMSUNG | 32   | 0xE0E0A05F | 
| AA59-00741A | Samsung TV             | 3              | SAMSUNG | 32   | 0xE0E0609F | 
| AA59-00741A | Samsung TV             | 4              | SAMSUNG | 32   | 0xE0E010EF | 
| AA59-00741A | Samsung TV             | 5              | SAMSUNG | 32   | 0xE0E0906F | 
| AA59-00741A | Samsung TV             | 6              | SAMSUNG | 32   | 0xE0E050AF | 
| AA59-00741A | Samsung TV             | 7              | SAMSUNG | 32   | 0xE0E030CF | 
| AA59-00741A | Samsung TV             | 8              | SAMSUNG | 32   | 0xE0E0B04F | 
| AA59-00741A | Samsung TV             | 9              | SAMSUNG | 32   | 0xE0E0708F | 
| AA59-00741A | Samsung TV             | 0              | SAMSUNG | 32   | 0xE0E08877 | 
| AA59-00741A | Samsung TV             | txt/mix        | SAMSUNG | 32   | 0xE0E034CB | 
| AA59-00741A | Samsung TV             | pre-ch         | SAMSUNG | 32   | 0xE0E0C837 | 
| AA59-00741A | Samsung TV             | volume +       | SAMSUNG | 32   | 0xE0E0E01F | 
| AA59-00741A | Samsung TV             | volume -       | SAMSUNG | 32   | 0xE0E0D02F | 
| AA59-00741A | Samsung TV             | channel +      | SAMSUNG | 32   | 0xE0E048B7 | 
| AA59-00741A | Samsung TV             | channel -      | SAMSUNG | 32   | 0xE0E008F7 | 
| AA59-00741A | Samsung TV             | ch list        | SAMSUNG | 32   | 0xE0E0D629 | 
| AA59-00741A | Samsung TV             | menu           | SAMSUNG | 32   | 0xE0E058A7 | 
| AA59-00741A | Samsung TV             | media p        | SAMSUNG | 32   | 0xE0E031CE | 
| AA59-00741A | Samsung TV             | guide          | SAMSUNG | 32   | 0xE0E0F20D | 
| AA59-00741A | Samsung TV             | info           | SAMSUNG | 32   | 0xE0E0F807 | 
| AA59-00741A | Samsung TV             | tools          | SAMSUNG | 32   | 0xE0E0D22D | 
| AA59-00741A | Samsung TV             | up             | SAMSUNG | 32   | 0xE0E006F9 | 
| AA59-00741A | Samsung TV             | left           | SAMSUNG | 32   | 0xE0E0A659 | 
| AA59-00741A | Samsung TV             | right          | SAMSUNG | 32   | 0xE0E046B9 | 
| AA59-00741A | Samsung TV             | down           | SAMSUNG | 32   | 0xE0E08679 | 
| AA59-00741A | Samsung TV             | enter          | SAMSUNG | 32   | 0xE0E016E9 | 
| AA59-00741A | Samsung TV             | return         | SAMSUNG | 32   | 0xE0E01AE5 | 
| AA59-00741A | Samsung TV             | exit           | SAMSUNG | 32   | 0xE0E0B44B | 
| AA59-00741A | Samsung TV             | e-manual       | SAMSUNG | 32   | 0xE0E0FC03 | 
| AA59-00741A | Samsung TV             | pic size       | SAMSUNG | 32   | 0xE0E07C83 | 
| AA59-00741A | Samsung TV             | ad/subt        | SAMSUNG | 32   | 0xE0E0A45B | 
| AA59-00741A | Samsung TV             | stop           | SAMSUNG | 32   | 0xE0E0629D | 
| AA59-00741A | Samsung TV             | play           | SAMSUNG | 32   | 0xE0E0E21D | 
| AA59-00741A | Samsung TV             | pause          | SAMSUNG | 32   | 0xE0E052AD | 
| AA59-00741A | Samsung TV             | rewind         | SAMSUNG | 32   | 0xE0E0A25D | 
| AA59-00741A | Samsung TV             | forward        | SAMSUNG | 32   | 0xE0E012ED | 
| AA59-00741A | Samsung TV             | a              | SAMSUNG | 32   | 0xE0E036C9 | 
| AA59-00741A | Samsung TV             | b              | SAMSUNG | 32   | 0xE0E028D7 | 
| AA59-00741A | Samsung TV             | c              | SAMSUNG | 32   | 0xE0E0A857 | 
| AA59-00741A | Samsung TV             | d              | SAMSUNG | 32   | 0xE0E06897 | 
| RM-SMR1     | Sony Chaine HiFi       | on/off         | SONY    | 12   | 0xA81      | 
| RM-SMR1     | Sony Chaine HiFi       | sleep          | SONY    | 12   | 0x61       | 
| RM-SMR1     | Sony Chaine HiFi       | clock select   | SONY    | 12   | 0x461      | 
| RM-SMR1     | Sony Chaine HiFi       | clock set      | SONY    | 12   | 0xA61      | 
| RM-SMR1     | Sony Chaine HiFi       | function       | SONY    | 15   | 0x4B09     | 
| RM-SMR1     | Sony Chaine HiFi       | tuner memory   | SONY    | 12   | 0x701      | 
| RM-SMR1     | Sony Chaine HiFi       | display        | SONY    | 12   | 0xD21      | 
| RM-SMR1     | Sony Chaine HiFi       | function tape  | SONY    | 12   | 0xC41      | 
| RM-SMR1     | Sony Chaine HiFi       | tape play      | SONY    | 12   | 0x2CE      | 
| RM-SMR1     | Sony Chaine HiFi       | tape stop      | SONY    | 12   | 0x1D1      | 
| RM-SMR1     | Sony Chaine HiFi       | function tuner | SONY    | 12   | 0xF01      | 
| RM-SMR1     | Sony Chaine HiFi       | tuning up      | SONY    | 12   | 0x81       | 
| RM-SMR1     | Sony Chaine HiFi       | tuning down    | SONY    | 12   | 0x881      | 
| RM-SMR1     | Sony Chaine HiFi       | function cd    | SONY    | 12   | 0xA41      | 
| RM-SMR1     | Sony Chaine HiFi       | cd play/pause  | SONY    | 12   | 0x511      | 
| RM-SMR1     | Sony Chaine HiFi       | cd stop        | SONY    | 12   | 0x1D1      | 
| RM-SMR1     | Sony Chaine HiFi       | clear          | SONY    | 20   | 0xF0B9C    | 
| RM-SMR1     | Sony Chaine HiFi       | play mode      | SONY    | 20   | 0x14B9C    | 
| RM-SMR1     | Sony Chaine HiFi       | repeat         | SONY    | 20   | 0x34B9C    | 
| RM-SMR1     | Sony Chaine HiFi       | enter          | SONY    | 20   | 0x3EB9C    | 
| RM-SMR1     | Sony Chaine HiFi       | volume up      | SONY    | 12   | 0x481      | 
| RM-SMR1     | Sony Chaine HiFi       | volume down    | SONY    | 12   | 0xC81      | 
| RM-SMR1     | Sony Chaine HiFi       | equalizer up   | SONY    | 15   | 0xF09      | 
| RM-SMR1     | Sony Chaine HiFi       | equalizer down | SONY    | 15   | 0x4F09     | 
| RM-SMR1     | Sony Chaine HiFi       | equalizer      | SONY    | 15   | 0x6309     | 
| RM-SMR1     | Sony Chaine HiFi       | forward        | SONY    | 20   | 0x2CB9C    | 
| RM-SMR1     | Sony Chaine HiFi       | backward       | SONY    | 20   | 0xCCB9C    | 
| RM-SMR1     | Sony Chaine HiFi       | track next     | SONY    | 20   | 0x8CB9C    | 
| RM-SMR1     | Sony Chaine HiFi       | track down     | SONY    | 20   | 0xCB9C     | 
| bbox        | Bbox Remote            | mute           | NEC     | 32   | 0x16D6F00F | 
| bbox        | Bbox Remote            | on/off         | NEC     | 32   | 0x16D648B7 | 
| bbox        | Bbox Remote            | tv green       | NEC     | 32   | 0x16D62CD3 | 
| bbox        | Bbox Remote            | 3 dots         | NEC     | 32   | 0x16D60CF3 | 
| bbox        | Bbox Remote            | up             | NEC     | 32   | 0x16D6D02F | 
| bbox        | Bbox Remote            | down           | NEC     | 32   | 0x16D630CF | 
| bbox        | Bbox Remote            | left           | NEC     | 32   | 0x16D6D827 | 
| bbox        | Bbox Remote            | right          | NEC     | 32   | 0x16D638C7 | 
| bbox        | Bbox Remote            | ok             | NEC     | 32   | 0x16D6A857 | 
| bbox        | Bbox Remote            | back           | NEC     | 32   | 0x16D650AF | 
| bbox        | Bbox Remote            | home           | NEC     | 32   | 0x16D628D7 | 
| bbox        | Bbox Remote            | play/pause     | NEC     | 32   | 0x16D6748B | 
| bbox        | Bbox Remote            | program +      | NEC     | 32   | 0x16D608F7 | 
| bbox        | Bbox Remote            | program -      | NEC     | 32   | 0x16D658A7 | 
| bbox        | Bbox Remote            | volume +       | NEC     | 32   | 0x16D6B04F | 
| bbox        | Bbox Remote            | volume -       | NEC     | 32   | 0x16D6708F | 
| bbox        | Bbox Remote            | 1              | NEC     | 32   | 0x16D6807F | 
| bbox        | Bbox Remote            | 2              | NEC     | 32   | 0x16D640BF | 
| bbox        | Bbox Remote            | 3              | NEC     | 32   | 0x16D6C03F | 
| bbox        | Bbox Remote            | 4              | NEC     | 32   | 0x16D620DF | 
| bbox        | Bbox Remote            | 5              | NEC     | 32   | 0x16D6A05F | 
| bbox        | Bbox Remote            | 6              | NEC     | 32   | 0x16D6609F | 
| bbox        | Bbox Remote            | 7              | NEC     | 32   | 0x16D6E01F | 
| bbox        | Bbox Remote            | 8              | NEC     | 32   | 0x16D610EF | 
| bbox        | Bbox Remote            | 9              | NEC     | 32   | 0x16D6906F | 
| bbox        | Bbox Remote            | 0              | NEC     | 32   | 0x16D600FF | 
| bbox        | Bbox Remote            | record         | NEC     | 32   | 0x16D6847B | 
| bbox        | Bbox Remote            | keyboard       | NEC     | 32   | 0x16D614EB | 
| AK59-00149A | Samsung Blu-Ray reader | on/off         | UNKNOWN | 32   | 0xE4CD1208 | 
| AK59-00149A | Samsung Blu-Ray reader | on/off tv      | SAMSUNG | 32   | 0xE0E040BF | 
| AK59-00149A | Samsung Blu-Ray reader | source         | SAMSUNG | 32   | 0xE0E0807F | 
| AK59-00149A | Samsung Blu-Ray reader | tv volume -    | SAMSUNG | 32   | 0xE0E0D02F | 
| AK59-00149A | Samsung Blu-Ray reader | tv volume +    | SAMSUNG | 32   | 0xE0E0E01F | 
| AK59-00149A | Samsung Blu-Ray reader | eject          | UNKNOWN | 32   | 0x6E6FE942 | 
| AK59-00149A | Samsung Blu-Ray reader | 1              | UNKNOWN | 32   | 0x94F37EE4 | 
| AK59-00149A | Samsung Blu-Ray reader | 2              | UNKNOWN | 32   | 0xF61D79DE | 
| AK59-00149A | Samsung Blu-Ray reader | 3              | UNKNOWN | 32   | 0x81772F84 | 
| AK59-00149A | Samsung Blu-Ray reader | 4              | UNKNOWN | 32   | 0x4D91BBBE | 
| AK59-00149A | Samsung Blu-Ray reader | 5              | UNKNOWN | 32   | 0xC7695F20 | 
| AK59-00149A | Samsung Blu-Ray reader | 6              | UNKNOWN | 32   | 0x8AC8FA2  | 
| AK59-00149A | Samsung Blu-Ray reader | 7              | UNKNOWN | 32   | 0x95D2E7E4 | 
| AK59-00149A | Samsung Blu-Ray reader | 8              | UNKNOWN | 32   | 0x1353935E | 
| AK59-00149A | Samsung Blu-Ray reader | 9              | UNKNOWN | 32   | 0xCC7E81C8 | 
| AK59-00149A | Samsung Blu-Ray reader | 0              | UNKNOWN | 32   | 0x23EAE8C2 | 
| AK59-00149A | Samsung Blu-Ray reader | disc menu      | UNKNOWN | 32   | 0x56E6BC1E | 
| AK59-00149A | Samsung Blu-Ray reader | title menu     | UNKNOWN | 32   | 0x929DC0E4 | 
| AK59-00149A | Samsung Blu-Ray reader | stop           | UNKNOWN | 32   | 0x6AC61222 | 
| AK59-00149A | Samsung Blu-Ray reader | play           | UNKNOWN | 32   | 0xCBE92448 | 
| AK59-00149A | Samsung Blu-Ray reader | pause          | UNKNOWN | 32   | 0xC2E35B04 | 
| AK59-00149A | Samsung Blu-Ray reader | audio          | UNKNOWN | 32   | 0x4559419A | 
| AK59-00149A | Samsung Blu-Ray reader | home           | UNKNOWN | 32   | 0x11DB53E4 | 
| AK59-00149A | Samsung Blu-Ray reader | subtitle       | UNKNOWN | 32   | 0x3641054C | 
| AK59-00149A | Samsung Blu-Ray reader | tools          | UNKNOWN | 32   | 0xCA8FB328 | 
| AK59-00149A | Samsung Blu-Ray reader | info           | UNKNOWN | 32   | 0x66387AC0 | 
| AK59-00149A | Samsung Blu-Ray reader | up             | UNKNOWN | 32   | 0xD04CFC60 | 
| AK59-00149A | Samsung Blu-Ray reader | down           | UNKNOWN | 32   | 0x61DB14E2 | 
| AK59-00149A | Samsung Blu-Ray reader | left           | UNKNOWN | 32   | 0x72726A46 | 
| AK59-00149A | Samsung Blu-Ray reader | right          | UNKNOWN | 32   | 0x6F89644  | 
| AK59-00149A | Samsung Blu-Ray reader | enter          | UNKNOWN | 32   | 0x20464B24 | 
| AK59-00149A | Samsung Blu-Ray reader | return         | UNKNOWN | 32   | 0x9D3BF25E | 
| AK59-00149A | Samsung Blu-Ray reader | exit           | UNKNOWN | 32   | 0x3C50321E | 
| AK59-00149A | Samsung Blu-Ray reader | a              | UNKNOWN | 32   | 0x94CC5A5E | 
| AK59-00149A | Samsung Blu-Ray reader | b              | UNKNOWN | 32   | 0x23B1EF88 | 
| AK59-00149A | Samsung Blu-Ray reader | c              | UNKNOWN | 32   | 0xA563AFC2 | 
| AK59-00149A | Samsung Blu-Ray reader | d              | UNKNOWN | 32   | 0xF04ED5B0 | 
| AK59-00149A | Samsung Blu-Ray reader | view/bonus     | UNKNOWN | 32   | 0x44951B3E | 
| AK59-00149A | Samsung Blu-Ray reader | repeat/a-b     | UNKNOWN | 32   | 0x5B2305C8 | 
| AK59-00149A | Samsung Blu-Ray reader | repeat         | UNKNOWN | 32   | 0xD7D98FFE | 
| AK59-00149A | Samsung Blu-Ray reader | full/screen    | UNKNOWN | 32   | 0x3BAA1DFE | 
| AK59-00149A | Samsung Blu-Ray reader | previous track | UNKNOWN | 32   | 0x85F3A9A  | 
| AK59-00149A | Samsung Blu-Ray reader | next track     | UNKNOWN | 32   | 0x5A2EBCBE | 
| AK59-00149A | Samsung Blu-Ray reader | forward        | UNKNOWN | 32   | 0x555A6302 | 
| AK59-00149A | Samsung Blu-Ray reader | backward       | UNKNOWN | 32   | 0xFF4C3E20 | 

