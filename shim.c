
extern void hs_init(int *argc, char **argv[]);

extern void foo_init(int argc, char *argv[]) {
    hs_init(&argc, &argv);
}
