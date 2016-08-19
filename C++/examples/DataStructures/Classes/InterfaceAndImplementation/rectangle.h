
class Rectangle {
  
  // poleta (members) na class-a, ili atributi. kakto pri structurite
  //  static int blabla = 9;                           
  double width; // променлива за ширината на правоъгълника                                                                                                            
  double height; // променлива за височината на правоъгълника                        
  static int angle;// специфично поле, чиято стойност е еднаква за всички обекти от класа
  double * perimeter; //
  
 protected:
  
  void  someProtectedMethod();
  
 public:
  
  static int getAngle(); //  static методите имат достъп само до static полета
  Rectangle (double , double ); // constructor  - конструктор, който взема параметри. 
  // В случая искаме да подадем стойности на w и h още при създаването (декларирането, конструкцията) на променлива (обект) от тип Rectangle, 
  // които да присвоим на width и height в тялото на конструктора (да зададем width=w height=h в .cpp файла с имплементацията (конкретната функционалност) ).
  // Връщаният тип от конструктора не се декларира, тъй като конструкторите връщат винаги инстанция (обект, променлива) от типа към който принадлежат. 
  
  Rectangle (); // default constructor - конструктор по подразбиране. конструктора по подразбиране съществува винаги, дори да не е деклариран като прототип (interface)   
  ~Rectangle (); // desctructor. Деструктора е специален метод (функция) на класа, която се извиква, когато обекта се изтрива с оператора delete. Използва се за освобождаване на ресурсите използвани  от обекта
  // metodi (ili funkcii na clasa)                                                                                                                    
  void set_values (double, double); //method (funkciq na class-a) za zadavane na shirina i visochina , prototip (interface). 
  //в този метод не се упоменават изрично имената на параметрите, а само типа (double), което е възможно. В имплементацията на обекта обаче имената на параметрите са задължителни                                                  
  
  double area(); // //method (funkciq na class-a) za izchislqvane na liceto , prototip (interface) . изчислява лицето използвайки width и height                                                                           
  double get_diagonal(); // изчислява дължината на диагонала на правоъгълника 
  void printProperties(); // принтира собствените си width and height
  double getPerimeter();

};
