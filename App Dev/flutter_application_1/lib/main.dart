import 'package:flutter/material.dart';
import 'package:flutter_application_1/gradient_container.dart';

void main() {
  runApp(
    MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text(
            'Dice roll App',
            style: TextStyle(color: Colors.blue),
          ),
        ),
        body: const GradientContainer(Color.fromARGB(255, 135, 120, 232),
            Color.fromARGB(255, 21, 194, 216)),
      ),
    ),
  );
}
