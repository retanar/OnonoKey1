#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 400U

// Handedness by different flashed ROMs
#define EE_HANDS

// Setup split behavior with PIO and full duplex
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP4
#define SERIAL_USART_RX_PIN GP5
#define SERIAL_USART_PIN_SWAP

