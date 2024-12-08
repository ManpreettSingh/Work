import 'package:flutter/material.dart';

class TextContainer extends StatelessWidget{

  // TextContainer({super.key});
  const TextContainer(this.color1,this.text, {super.key});
  final String text;
  final Color color1;


  @override
  Widget build(BuildContext context) {
    return Text(
          text,
          style: TextStyle(
            color: color1,
            fontSize: 30,
          ),
    );
  }
}