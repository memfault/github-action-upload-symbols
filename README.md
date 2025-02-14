# Memfault Upload Symbol File GitHub Action

This action uploads a symbol file to Memfault's symbol file service.

## Usage

```yaml
      - name: Upload symbol file to Memfault
        uses: memfault/github-action-upload-symbols@v1
        with:
          MEMFAULT_ORG_TOKEN: ${{ secrets.MEMFAULT_ORG_TOKEN }}
          MEMFAULT_ORG_SLUG: ${{ secrets.MEMFAULT_ORG_SLUG }}
          MEMFAULT_PROJECT_SLUG: ${{ secrets.MEMFAULT_PROJECT_SLUG }}
          symbol_file: symbols.elf
```

## Inputs

> [!TIP]
>
> The `MEMFAULT_ORG_TOKEN`, `MEMFAULT_ORG_SLUG`, and `MEMFAULT_PROJECT_SLUG`
> should be set as GitHub secrets.

| Name                    | Description                                                                                                    | Required | Default |
| ----------------------- | -------------------------------------------------------------------------------------------------------------- | -------- | ------- |
| `MEMFAULT_ORG_TOKEN`    | Organization Auth Token. Generate one [here](https://app.memfault.com/organizations/-/settings/auth-tokens) | true     |         |
| `MEMFAULT_ORG_SLUG`     | Memfault Org Slug                                                                                              | true     |         |
| `MEMFAULT_PROJECT_SLUG` | Memfault Project Slug                                                                                          | true     |         |
| `symbol_file`           | Path to the symbol file                                                                                        | true     |         |
| `memfault_cli_version`  | Memfault CLI Version                                                                                           | true     | 1.0.11  |

Find more documentation here: [Memfault Docs](https://docs.memfault.com/docs/ci/uploading-symbols).
