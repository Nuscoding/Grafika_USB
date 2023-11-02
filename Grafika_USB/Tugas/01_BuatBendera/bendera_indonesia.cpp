#include <GL/glut.h>

// Fungsi untuk menggambar bendera Indonesia
void benderaIndonesia() {
    // Garis bendera putih (di bagian bawah)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Warna putih (RGB: 1.0, 1.0, 1.0)
    glVertex2f(0.0, 0.0);     // Sudut kiri atas
    glVertex2f(1.0, 0.0);     // Sudut kanan atas
    glVertex2f(1.0, 0.5);     // Sudut kanan bawah
    glVertex2f(0.0, 0.5);     // Sudut kiri bawah
    glEnd();

    // Garis bendera merah (di bagian atas)
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0); // Warna merah (RGB: 1.0, 0.0, 0.0)
    glVertex2f(0.0, 0.5);     // Sudut kiri atas
    glVertex2f(1.0, 0.5);     // Sudut kanan atas
    glVertex2f(1.0, 1.0);     // Sudut kanan bawah
    glVertex2f(0.0, 1.0);     // Sudut kiri bawah
    glEnd();
}

// Fungsi untuk menampilkan gambar
void display() {
    glClearColor(0.6, 0.8, 1.0, 1.0); // Latar belakang berwarna biru (RGBA: 0.6, 0.8, 1.0, 1.0)
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    benderaIndonesia(); // Memanggil fungsi untuk menggambar bendera Indonesia
    glutSwapBuffers();
}

// Fungsi untuk mengatur tampilan jendela
void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Skala bendera Indonesia
    glMatrixMode(GL_MODELVIEW);
}

// Fungsi utama
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Bendera Indonesia"); // Membuat jendela dengan judul "Bendera Indonesia"
    glutDisplayFunc(display); // Menentukan fungsi untuk menampilkan gambar
    glutReshapeFunc(reshape); // Menentukan fungsi untuk mengatur tampilan jendela
    glutMainLoop(); // Memulai loop utama GLUT
    return 0;
}
