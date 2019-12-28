# PostgreSQL

## SQL Dump

```sh

# 备份
PGPASSWORD=<password> pg_dump -h localhost -U postgres -Fc <database> > /path/<database>.sql

# 还原
pg_restore -c -d npgsql_test -h localhost -p 5432 -U postgres <fileName>

```
- https://www.postgresql.org/docs/12/backup-dump.html

- https://github.com/postgres/postgres

