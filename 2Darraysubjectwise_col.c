/**
#include <stdio.h>
#include <stdlib.h>

struct Triangle
{
   int a, b, c;
};

int square(struct Triangle t)
{
    int a = t.a, b = t.b, c = t.c;
    return (a + b + c)*(a + b - c)*(a - b + c)*(-a + b + c);
}

void sort_by_square(struct Triangle* a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (square(a[i]) > square(a[j]))
            {
                struct Triangle temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main()
{
   int n;
   scanf("%d", &n);
   struct Triangle *a = calloc(n, sizeof(struct Triangle));
   for (int i = 0; i < n; i++)
      scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
   sort_by_square(a, n);
   for (int i = 0; i < n; i++)
      printf("%d %d %d\n", a[i].a, a[i].b, a[i].c);
   return 0;
}**/
#include <stdio.h>
#include <math.h>

typedef struct {
    int a, b, c;
    double area;
} triangle;

double compute_area(int a, int b, int c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void sort_triangles(triangle t[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (t[j].area > t[j + 1].area) {
                triangle temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    triangle t[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &t[i].a, &t[i].b, &t[i].c);
        t[i].area = compute_area(t[i].a, t[i].b, t[i].c);
    }

    sort_triangles(t, n);

    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", t[i].a, t[i].b, t[i].c);
    }

    return 0;
}

