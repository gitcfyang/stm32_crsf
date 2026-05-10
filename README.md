# CRSF Receiver Parser for STM32

A simple example project for reading and decoding CRSF receiver signals using an STM32 microcontroller.

This example uses the **STM32F103C8T6** MCU and communicates with the CRSF receiver through UART.

---

## Features

- Read CRSF data frames from receiver
- Decode channel values
- Lightweight and simple implementation
- Designed for STM32 microcontrollers

---

## Hardware

- STM32F103C8T6
- CRSF-compatible receiver
- UART connection

---

## Notes

- CRSF uses a high baud rate UART protocol
- Make sure UART settings match your receiver configuration
- DMA or interrupt-based UART reception is recommended for stability

---

## Example Usage

The program receives CRSF frames through UART and parses channel data for further processing.

Possible applications include:

- RC control systems
- Robotics
- Flight controllers
- Remote vehicle projects

---

## License

This project is provided as an example and can be modified freely.