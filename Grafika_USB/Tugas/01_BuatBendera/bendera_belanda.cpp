#include <GL/glut.h>

// Fungsi untuk menggambar bendera Belanda
void benderaBelanda() {
    // Garis bendera merah
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0); // Warna merah (RGB: 1.0, 0.0, 0.0)
    glVertex2f(0.0, 0.66);    // Sudut kiri atas
    glVertex2f(1.0, 0.66);    // Sudut kanan atas
    glVertex2f(1.0, 1.0);     // Sudut kanan bawah
    glVertex2f(0.0, 1.0);     // Sudut kiri bawah
    glEnd();

    // Garis bendera putih
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Warna putih (RGB: 1.0, 1.0, 1.0)
    glVertex2f(0.0, 0.33);    // Sudut kiri atas
    glVertex2f(1.0, 0.33);    // Sudut kanan atas
    glVertex2f(1.0, 0.66);    // Sudut kanan bawah
    glVertex2f(0.0, 0.66);    // Sudut kiri bawah
    glEnd();

    // Garis bendera biru
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Warna biru (RGB: 0.0, 0.0, 1.0)
    glVertex2f(0.0, 0.0);     // Sudut kiri atas
    glVertex2f(1.0, 0.0);     // Sudut kanan atas
    glVertex2f(1.0, 0.33);    // Sudut kanan bawah
    glVertex2f(0.0, 0.33);    // Sudut kiri bawah
    glEnd();
}

// Fungsi untuk menampilkan gambar
void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Latar belakang putih (RGBA: 1.0, 1.0, 1.0, 1.0)
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    benderaBelanda(); // Memanggil fungsi untuk menggambar bendera Belanda
    glutSwapBuffers();
}

// Fungsi untuk mengatur tampilan jendela
void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Skala bendera Belanda tetap 1:1
    glMatrixMode(GL_MODELVIEW);
}

// Fungsi utama
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Bendera Belanda"); // Membuat jendela dengan judul "Bendera Belanda"
    glutDisplayFunc(display); // Menentukan fungsi untuk menampilkan gambar
    glutReshapeFunc(reshape); // Menentukan fungsi untuk mengatur tampilan jendela
    glutMainLoop(); // Memulai loop utama GLUT
    return 0;
}
