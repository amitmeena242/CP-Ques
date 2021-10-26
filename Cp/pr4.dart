import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: ID(),
    debugShowCheckedModeBanner: false,
  ));
}

class ID extends StatefulWidget {
  const ID({Key? key}) : super(key: key);

  @override
  _IDState createState() => _IDState();
}

class _IDState extends State<ID> {
  int powerLevel = 0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[900],
      appBar: AppBar(
        title: Text(
          'ID Card',
          style: TextStyle(
            color: Colors.grey[300],
            fontSize: 28.0,
          ),
        ),
        centerTitle: true,
        backgroundColor: Colors.grey[850],
        elevation: 0.0,
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          setState(() {
            powerLevel++;
          });
        },
        child: Icon(Icons.add),
        backgroundColor: Colors.grey[800],
      ),
      body: Padding(
        padding: const EdgeInsets.fromLTRB(20.0, 40.0, 20.0, 0.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Center(
              child: CircleAvatar(
                backgroundImage: AssetImage('assets/itachi.jpg'),
                radius: 40.0,
              ),
            ),
            Divider(
              height: 90.0,
              color: Colors.grey[850],
            ),
            Container(
              child: Text(
                'Name',
                style: TextStyle(
                  color: Colors.grey[400],
                  fontSize: 15.0,
                  letterSpacing: 2.0,
                ),
              ),
            ),
            SizedBox(
              height: 10.0,
            ),
            Container(
              child: Text(
                'UCHIHA ITACHI',
                style: TextStyle(
                  color: Colors.amber[300],
                  fontSize: 20.0,
                  letterSpacing: 2.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
            SizedBox(
              height: 30.0,
            ),
            Container(
              child: Text(
                'Power Level',
                style: TextStyle(
                  color: Colors.grey[400],
                  fontSize: 15.0,
                  letterSpacing: 2.0,
                ),
              ),
            ),
            SizedBox(
              height: 10.0,
            ),
            Container(
              child: Text(
                '$powerLevel',
                style: TextStyle(
                  color: Colors.amber[300],
                  fontSize: 20.0,
                  letterSpacing: 2.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
            SizedBox(
              height: 30.0,
            ),
            Container(
              child: Text(
                'Number Of Kills',
                style: TextStyle(
                  color: Colors.grey[400],
                  fontSize: 15.0,
                  letterSpacing: 2.0,
                ),
              ),
            ),
            SizedBox(
              height: 10.0,
            ),
            Container(
              child: Text(
                '1000+',
                style: TextStyle(
                  color: Colors.amber[300],
                  fontSize: 20.0,
                  letterSpacing: 2.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
            SizedBox(
              height: 30.0,
            ),
            Container(
              child: Row(
                children: [
                  Icon(
                    Icons.email,
                    color: Colors.grey[500],
                  ),
                  SizedBox(
                    width: 20.0,
                  ),
                  Text(
                    'uchiha.itachi@konoha.com',
                    style: TextStyle(
                      fontSize: 15.0,
                      color: Colors.amber[300],
                      letterSpacing: 1.5,
                    ),
                  )
                ],
              ),
            )
          ],
        ),
      ),
    );
  }
}
