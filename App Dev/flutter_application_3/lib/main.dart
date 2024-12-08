import 'package:flutter/material.dart';
import 'package:flutter_application_3/gradient_container.dart';
void main() {
  runApp(
    const MaterialApp(
      home: Scaffold(
        body: GradientContainer(Colors.deepPurpleAccent,Colors.lightBlueAccent),
      ),
    ),
  );
}


