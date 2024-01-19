#include <GL/freeglut.h>

void display(){
float s= 1.0f;
int n = 10;

gluOrtho2D(-4,12,-4,12);
glMatrixMode(GL_PROJECTION);


glClear(GL_COLOR_BUFFER_BIT);

glClearColor(0,0,1,0);

glLoadIdentity();

for(int i =0 ; i < n ;i++ ){
    for(int j =0 ; j <n ;j++ ){
            if((i+j)% 2 ==0 ){
                glColor3f(1.0f,1.0f,1.0f);
            }else{
                glColor3f(0.0f,0.0f,0.0f);
            }
            float x = i * s ;
            float y= j * s ;

            glBegin(GL_QUADS);
            glVertex3f(x,y,0.0f);
             glVertex3f(x + s,y,0.0f);
            glVertex3f(x+s,y + s,0.0f);
            glVertex3f(x,y + s,0.0f);
            glEnd();
glFlush();


    }
}

}

int main(int argu,char** argv){

glutInit(&argu,argv);

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

glLoadIdentity();

glutCreateWindow("My chess game floor ");
glutInitWindowPosition(1,1);

glutInitWindowSize(800,800);

glutDisplayFunc(display);

glutMainLoop();

return 0;
}

