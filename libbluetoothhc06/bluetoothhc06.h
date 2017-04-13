#include "simpletools.h"                      // Include simple tools
#include "fdserial.h"

typedef fdserial Bluetooth;
// First Parameter: JY MCU HC06 module's TX pin
// Second Parameter: JY MCU HC06 module's RX pin
Bluetooth* bluetooth_open(int propRx_btTx, int propTx_btRx);
char bluetooth_rx_char(Bluetooth* bt);
void bluetooth_close(Bluetooth* bt);
void bluetooth_send_list(Bluetooth* bt, );
