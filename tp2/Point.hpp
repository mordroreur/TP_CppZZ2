#ifndef _HEADER_POINT_H_ 
#define _HEADER_POINT_H_ 

class Point {
   // par défaut, tout est privé dans une "class"  
  int x;
  int y;
  static int compteur;
  
 public:
  Point();
  Point(int x, int y);
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  void deplacerDe(int x, int y);
  void deplacerVers(int x, int y);
  static int getCompteur();

};

#endif /*_HEADER_POINT_H_ */
