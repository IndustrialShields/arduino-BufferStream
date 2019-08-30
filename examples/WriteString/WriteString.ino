// BufferStream library example
// by Industrial Shields

#include <BufferStream.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Create stream from data
  char data[100];
  WriteBufferStream stream(data, 100);

  // Add data to stream
  stream.print("Hello");
  stream.print(' ');
  stream.print("WriteStream!");

  // Add the '\0' character at the end of the stream
  stream.write(uint8_t('\0'));

  // Print data
  Serial.begin(9600UL);
  Serial.println(data);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Nothing to do
}
