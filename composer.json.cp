{
    "name": "drupal/legacy-project",
    "description": "Project template for Drupal 8 projects with composer following drupal/drupal layout",
    "type": "project",
    "license": "GPL-2.0-or-later",
    "homepage": "https://www.drupal.org/project/drupal",
    "support": {
        "docs": "https://www.drupal.org/docs/user_guide/en/index.html",
        "chat": "https://www.drupal.org/node/314178"
    },
    "repositories": [
        {
            "type": "composer",
            "url": "https://packages.drupal.org/8"
        }
    ],
    "require": {
        "composer/installers": "^1.2",
        "drupal/core-composer-scaffold": "^8.8",
        "drupal/core-project-message": "^8.8",
        "drupal/core-recommended": "^8.8",
        "drupal/core-vendor-hardening": "^8.8"
    },
    "conflict": {
        "drupal/drupal": "*"
    },
    "minimum-stability": "dev",
    "prefer-stable": true,
    "config": {
        "sort-packages": true
    },
    "extra": {
        "drupal-scaffold": {
            "locations": {
                "web-root": "./"
            }
        },
        "installer-paths": {
            "core": [
                "type:drupal-core"
            ],
            "libraries/{$name}": [
                "type:drupal-library"
            ],
            "modules/contrib/{$name}": [
                "type:drupal-module"
            ],
            "profiles/contrib/{$name}": [
                "type:drupal-profile"
            ],
            "themes/contrib/{$name}": [
                "type:drupal-theme"
            ],
            "drush/Commands/contrib/{$name}": [
                "type:drupal-drush"
            ],
            "modules/custom/{$name}": [
                "type:drupal-custom-module"
            ],
            "themes/custom/{$name}": [
                "type:drupal-custom-theme"
            ]
        },
        "drupal-core-project-message": {
            "include-keys": [
                "homepage",
                "support"
            ],
            "post-create-project-cmd-message": [
                "<bg=blue;fg=white>                                                         </>",
                "<bg=blue;fg=white>  Congratulations, you’ve installed the Drupal codebase  </>",
                "<bg=blue;fg=white>  from the drupal/legacy-project template!               </>",
                "<bg=blue;fg=white>                                                         </>",
                "",
                "<bg=yellow;fg=black>Next steps</>:",
                "  * Install the site: https://www.drupal.org/docs/8/install",
                "  * Read the user guide: https://www.drupal.org/docs/user_guide/en/index.html",
                "  * Get support: https://www.drupal.org/support",
                "  * Get involved with the Drupal community:",
                "      https://www.drupal.org/getting-involved",
                "  * Remove the plugin that prints this message:",
                "      composer remove drupal/core-project-message"
            ]
        }
    }
}
