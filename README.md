```bash
sudo apt install sdcc
```

```
avrdude -C AVR8051.conf -c stk500v1 -P /dev/ttyACM0 -b 19200 -p AT89S52 -U flash:w:"main.ihx":a
```

## Links
- https://ww1.microchip.com/downloads/en/DeviceDoc/doc1919.pdf
