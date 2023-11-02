#include <GL/glut.h>

// Fungsi untuk menggambar bendera Palestina
void benderaPalestina() {
    // Garis bendera hitam (di atas)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam (RGB: 0.0, 0.0, 0.0)
    glVertex2f(0.0, 0.66);    // Sudut kiri atas
    glVertex2f(1.0, 0.66);    // Sudut kanan atas
    glVertex2f(1.0, 1.0);     // Sudut kanan bawah
    glVertex2f(0.0, 1.0);     // Sudut kiri bawah
    glEnd();

    // Garis bendera putih (di tengah)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Warna putih (RGB: 1.0, 1.0, 1.0)
    glVertex2f(0.0, 0.33);    // Sudut kiri atas
    glVertex2f(1.0, 0.33);    // Sudut kanan atas
    glVertex2f(1.0, 0.66);    // Sudut kanan bawah
    glVertex2f(0.0, 0.66);    // Sudut kiri bawah
    glEnd();

    // Garis bendera hijau (hijau tua) (di bawah)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.4, 0.0); // Warna hijau tua (RGB: 0.0, 0.4, 0.0)
    glVertex2f(0.0, 0.0);     // Sudut kiri atas
    glVertex2f(1.0, 0.0);     // Sudut kanan atas
    glVertex2f(1.0, 0.33);    // Sudut kanan bawah
    glVertex2f(0.0, 0.33);    // Sudut kiri bawah
    glEnd();

    // Segitiga merah muda (lebih besar)
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.3, 0.3);   // Warna merah muda (RGB: 1.0, 0.3, 0.3)
    glVertex2f(0.0, 1);         // Sudut puncak segitiga
    glVertex2f(0.350, 0.495);   // Posisi sudut runcing segitiga yang lebih besar
    glVertex2f(0.0, 0.0);       // Sudut kiri bawah
    glEnd();
}

// Fungsi untuk menampilkan gambar
void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Latar belakang putih (RGBA: 1.0, 1.0, 1.0, 1.0)
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    benderaPalestina(); // Memanggil fungsi untuk menggambar bendera Palestina
    glutSwapBuffers();
}

// Fungsi untuk mengatur tampilan jendela
void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Skala bendera Palestina tetap 1:1
    glMatrixMode(GL_MODELVIEW);
}

// Fungsi utama
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Bendera Palestina"); // Membuat jendela dengan judul "Bendera Palestina"
    glutDisplayFunc(display); // Menentukan fungsi untuk menampilkan gambar
    glutReshapeFunc(reshape); // Menentukan fungsi untuk mengatur tampilan jendela
    glutMainLoop(); // Memulai loop utama GLUT
    return 0;
}
