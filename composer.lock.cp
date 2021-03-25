{
    "_readme": [
        "This file locks the dependencies of your project to a known state",
        "Read more about it at https://getcomposer.org/doc/01-basic-usage.md#installing-dependencies",
        "This file is @generated automatically"
    ],
    "content-hash": "6ea1a346dc1e60285388f6b27eb07195",
    "packages": [
        {
            "name": "asm89/stack-cors",
            "version": "1.3.0",
            "source": {
                "type": "git",
                "url": "https://github.com/asm89/stack-cors.git",
                "reference": "b9c31def6a83f84b4d4a40d35996d375755f0e08"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/asm89/stack-cors/zipball/b9c31def6a83f84b4d4a40d35996d375755f0e08",
                "reference": "b9c31def6a83f84b4d4a40d35996d375755f0e08",
                "shasum": ""
            },
            "require": {
                "php": ">=5.5.9",
                "symfony/http-foundation": "~2.7|~3.0|~4.0|~5.0",
                "symfony/http-kernel": "~2.7|~3.0|~4.0|~5.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^5.0 || ^4.8.10",
                "squizlabs/php_codesniffer": "^2.3"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.2-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Asm89\\Stack\\": "src/Asm89/Stack/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Alexander",
                    "email": "iam.asm89@gmail.com"
                }
            ],
            "description": "Cross-origin resource sharing library and stack middleware",
            "homepage": "https://github.com/asm89/stack-cors",
            "keywords": [
                "cors",
                "stack"
            ],
            "time": "2019-12-24T22:41:47+00:00"
        },
        {
            "name": "composer/installers",
            "version": "v1.9.0",
            "source": {
                "type": "git",
                "url": "https://github.com/composer/installers.git",
                "reference": "b93bcf0fa1fccb0b7d176b0967d969691cd74cca"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/composer/installers/zipball/b93bcf0fa1fccb0b7d176b0967d969691cd74cca",
                "reference": "b93bcf0fa1fccb0b7d176b0967d969691cd74cca",
                "shasum": ""
            },
            "require": {
                "composer-plugin-api": "^1.0 || ^2.0"
            },
            "replace": {
                "roundcube/plugin-installer": "*",
                "shama/baton": "*"
            },
            "require-dev": {
                "composer/composer": "1.6.* || 2.0.*@dev",
                "composer/semver": "1.0.* || 2.0.*@dev",
                "phpunit/phpunit": "^4.8.36",
                "sebastian/comparator": "^1.2.4",
                "symfony/process": "^2.3"
            },
            "type": "composer-plugin",
            "extra": {
                "class": "Composer\\Installers\\Plugin",
                "branch-alias": {
                    "dev-master": "1.0-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Composer\\Installers\\": "src/Composer/Installers"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Kyle Robinson Young",
                    "email": "kyle@dontkry.com",
                    "homepage": "https://github.com/shama"
                }
            ],
            "description": "A multi-framework Composer library installer",
            "homepage": "https://composer.github.io/installers/",
            "keywords": [
                "Craft",
                "Dolibarr",
                "Eliasis",
                "Hurad",
                "ImageCMS",
                "Kanboard",
                "Lan Management System",
                "MODX Evo",
                "MantisBT",
                "Mautic",
                "Maya",
                "OXID",
                "Plentymarkets",
                "Porto",
                "RadPHP",
                "SMF",
                "Thelia",
                "Whmcs",
                "WolfCMS",
                "agl",
                "aimeos",
                "annotatecms",
                "attogram",
                "bitrix",
                "cakephp",
                "chef",
                "cockpit",
                "codeigniter",
                "concrete5",
                "croogo",
                "dokuwiki",
                "drupal",
                "eZ Platform",
                "elgg",
                "expressionengine",
                "fuelphp",
                "grav",
                "installer",
                "itop",
                "joomla",
                "known",
                "kohana",
                "laravel",
                "lavalite",
                "lithium",
                "magento",
                "majima",
                "mako",
                "mediawiki",
                "modulework",
                "modx",
                "moodle",
                "osclass",
                "phpbb",
                "piwik",
                "ppi",
                "puppet",
                "pxcms",
                "reindex",
                "roundcube",
                "shopware",
                "silverstripe",
                "sydes",
                "sylius",
                "symfony",
                "typo3",
                "wordpress",
                "yawik",
                "zend",
                "zikula"
            ],
            "funding": [
                {
                    "url": "https://packagist.com",
                    "type": "custom"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/composer/composer",
                    "type": "tidelift"
                }
            ],
            "time": "2020-04-07T06:57:05+00:00"
        },
        {
            "name": "composer/semver",
            "version": "1.5.1",
            "source": {
                "type": "git",
                "url": "https://github.com/composer/semver.git",
                "reference": "c6bea70230ef4dd483e6bbcab6005f682ed3a8de"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/composer/semver/zipball/c6bea70230ef4dd483e6bbcab6005f682ed3a8de",
                "reference": "c6bea70230ef4dd483e6bbcab6005f682ed3a8de",
                "shasum": ""
            },
            "require": {
                "php": "^5.3.2 || ^7.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^4.5 || ^5.0.5"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Composer\\Semver\\": "src"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nils Adermann",
                    "email": "naderman@naderman.de",
                    "homepage": "http://www.naderman.de"
                },
                {
                    "name": "Jordi Boggiano",
                    "email": "j.boggiano@seld.be",
                    "homepage": "http://seld.be"
                },
                {
                    "name": "Rob Bast",
                    "email": "rob.bast@gmail.com",
                    "homepage": "http://robbast.nl"
                }
            ],
            "description": "Semver library that offers utilities, version constraint parsing and validation.",
            "keywords": [
                "semantic",
                "semver",
                "validation",
                "versioning"
            ],
            "time": "2020-01-13T12:06:48+00:00"
        },
        {
            "name": "doctrine/annotations",
            "version": "v1.4.0",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/annotations.git",
                "reference": "54cacc9b81758b14e3ce750f205a393d52339e97"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/annotations/zipball/54cacc9b81758b14e3ce750f205a393d52339e97",
                "reference": "54cacc9b81758b14e3ce750f205a393d52339e97",
                "shasum": ""
            },
            "require": {
                "doctrine/lexer": "1.*",
                "php": "^5.6 || ^7.0"
            },
            "require-dev": {
                "doctrine/cache": "1.*",
                "phpunit/phpunit": "^5.7"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.4.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Doctrine\\Common\\Annotations\\": "lib/Doctrine/Common/Annotations"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Benjamin Eberlei",
                    "email": "kontakt@beberlei.de"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Jonathan Wage",
                    "email": "jonwage@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "Docblock Annotations Parser",
            "homepage": "http://www.doctrine-project.org",
            "keywords": [
                "annotations",
                "docblock",
                "parser"
            ],
            "time": "2017-02-24T16:22:25+00:00"
        },
        {
            "name": "doctrine/cache",
            "version": "v1.6.2",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/cache.git",
                "reference": "eb152c5100571c7a45470ff2a35095ab3f3b900b"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/cache/zipball/eb152c5100571c7a45470ff2a35095ab3f3b900b",
                "reference": "eb152c5100571c7a45470ff2a35095ab3f3b900b",
                "shasum": ""
            },
            "require": {
                "php": "~5.5|~7.0"
            },
            "conflict": {
                "doctrine/common": ">2.2,<2.4"
            },
            "require-dev": {
                "phpunit/phpunit": "~4.8|~5.0",
                "predis/predis": "~1.0",
                "satooshi/php-coveralls": "~0.6"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.6.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Doctrine\\Common\\Cache\\": "lib/Doctrine/Common/Cache"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Benjamin Eberlei",
                    "email": "kontakt@beberlei.de"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Jonathan Wage",
                    "email": "jonwage@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "Caching library offering an object-oriented API for many cache backends",
            "homepage": "http://www.doctrine-project.org",
            "keywords": [
                "cache",
                "caching"
            ],
            "time": "2017-07-22T12:49:21+00:00"
        },
        {
            "name": "doctrine/collections",
            "version": "v1.4.0",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/collections.git",
                "reference": "1a4fb7e902202c33cce8c55989b945612943c2ba"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/collections/zipball/1a4fb7e902202c33cce8c55989b945612943c2ba",
                "reference": "1a4fb7e902202c33cce8c55989b945612943c2ba",
                "shasum": ""
            },
            "require": {
                "php": "^5.6 || ^7.0"
            },
            "require-dev": {
                "doctrine/coding-standard": "~0.1@dev",
                "phpunit/phpunit": "^5.7"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.3.x-dev"
                }
            },
            "autoload": {
                "psr-0": {
                    "Doctrine\\Common\\Collections\\": "lib/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Benjamin Eberlei",
                    "email": "kontakt@beberlei.de"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Jonathan Wage",
                    "email": "jonwage@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "Collections Abstraction library",
            "homepage": "http://www.doctrine-project.org",
            "keywords": [
                "array",
                "collections",
                "iterator"
            ],
            "time": "2017-01-03T10:49:41+00:00"
        },
        {
            "name": "doctrine/common",
            "version": "v2.7.3",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/common.git",
                "reference": "4acb8f89626baafede6ee5475bc5844096eba8a9"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/common/zipball/4acb8f89626baafede6ee5475bc5844096eba8a9",
                "reference": "4acb8f89626baafede6ee5475bc5844096eba8a9",
                "shasum": ""
            },
            "require": {
                "doctrine/annotations": "1.*",
                "doctrine/cache": "1.*",
                "doctrine/collections": "1.*",
                "doctrine/inflector": "1.*",
                "doctrine/lexer": "1.*",
                "php": "~5.6|~7.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^5.4.6"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "2.7.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Doctrine\\Common\\": "lib/Doctrine/Common"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Benjamin Eberlei",
                    "email": "kontakt@beberlei.de"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Jonathan Wage",
                    "email": "jonwage@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "Common Library for Doctrine projects",
            "homepage": "http://www.doctrine-project.org",
            "keywords": [
                "annotations",
                "collections",
                "eventmanager",
                "persistence",
                "spl"
            ],
            "time": "2017-07-22T08:35:12+00:00"
        },
        {
            "name": "doctrine/inflector",
            "version": "v1.2.0",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/inflector.git",
                "reference": "e11d84c6e018beedd929cff5220969a3c6d1d462"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/inflector/zipball/e11d84c6e018beedd929cff5220969a3c6d1d462",
                "reference": "e11d84c6e018beedd929cff5220969a3c6d1d462",
                "shasum": ""
            },
            "require": {
                "php": "^7.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^6.2"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.2.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Doctrine\\Common\\Inflector\\": "lib/Doctrine/Common/Inflector"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Benjamin Eberlei",
                    "email": "kontakt@beberlei.de"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Jonathan Wage",
                    "email": "jonwage@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "Common String Manipulations with regard to casing and singular/plural rules.",
            "homepage": "http://www.doctrine-project.org",
            "keywords": [
                "inflection",
                "pluralize",
                "singularize",
                "string"
            ],
            "time": "2017-07-22T12:18:28+00:00"
        },
        {
            "name": "doctrine/lexer",
            "version": "1.0.2",
            "source": {
                "type": "git",
                "url": "https://github.com/doctrine/lexer.git",
                "reference": "1febd6c3ef84253d7c815bed85fc622ad207a9f8"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/doctrine/lexer/zipball/1febd6c3ef84253d7c815bed85fc622ad207a9f8",
                "reference": "1febd6c3ef84253d7c815bed85fc622ad207a9f8",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.2"
            },
            "require-dev": {
                "phpunit/phpunit": "^4.5"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Doctrine\\Common\\Lexer\\": "lib/Doctrine/Common/Lexer"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Roman Borschel",
                    "email": "roman@code-factory.org"
                },
                {
                    "name": "Guilherme Blanco",
                    "email": "guilhermeblanco@gmail.com"
                },
                {
                    "name": "Johannes Schmitt",
                    "email": "schmittjoh@gmail.com"
                }
            ],
            "description": "PHP Doctrine Lexer parser library that can be used in Top-Down, Recursive Descent Parsers.",
            "homepage": "https://www.doctrine-project.org/projects/lexer.html",
            "keywords": [
                "annotations",
                "docblock",
                "lexer",
                "parser",
                "php"
            ],
            "time": "2019-06-08T11:03:04+00:00"
        },
        {
            "name": "drupal/core",
            "version": "8.9.1",
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/drupal/core/zipball/e8ee964c562870381876e85d3f5eaaf8c8ecc9ee",
                "reference": "e8ee964c562870381876e85d3f5eaaf8c8ecc9ee",
                "shasum": ""
            },
            "require": {
                "asm89/stack-cors": "^1.1",
                "composer/semver": "^1.0",
                "doctrine/annotations": "^1.4",
                "doctrine/common": "^2.7",
                "easyrdf/easyrdf": "^0.9",
                "egulias/email-validator": "^2.0",
                "ext-date": "*",
                "ext-dom": "*",
                "ext-filter": "*",
                "ext-gd": "*",
                "ext-hash": "*",
                "ext-json": "*",
                "ext-pcre": "*",
                "ext-pdo": "*",
                "ext-session": "*",
                "ext-simplexml": "*",
                "ext-spl": "*",
                "ext-tokenizer": "*",
                "ext-xml": "*",
                "guzzlehttp/guzzle": "^6.3",
                "laminas/laminas-diactoros": "^1.8",
                "laminas/laminas-feed": "^2.12",
                "masterminds/html5": "^2.1",
                "pear/archive_tar": "^1.4.9",
                "php": ">=7.0.8",
                "psr/log": "^1.0",
                "stack/builder": "^1.0",
                "symfony-cmf/routing": "^1.4",
                "symfony/class-loader": "~3.4.0",
                "symfony/console": "~3.4.0",
                "symfony/dependency-injection": "~3.4.26",
                "symfony/event-dispatcher": "~3.4.0",
                "symfony/http-foundation": "~3.4.35",
                "symfony/http-kernel": "~3.4.14",
                "symfony/polyfill-iconv": "^1.0",
                "symfony/process": "~3.4.0",
                "symfony/psr-http-message-bridge": "^1.1.2",
                "symfony/routing": "~3.4.0",
                "symfony/serializer": "~3.4.0",
                "symfony/translation": "~3.4.0",
                "symfony/validator": "~3.4.0",
                "symfony/yaml": "~3.4.5",
                "twig/twig": "^1.38.2",
                "typo3/phar-stream-wrapper": "^3.1.3"
            },
            "conflict": {
                "drupal/pathauto": "<1.6",
                "drush/drush": "<8.1.10"
            },
            "replace": {
                "drupal/action": "self.version",
                "drupal/aggregator": "self.version",
                "drupal/automated_cron": "self.version",
                "drupal/ban": "self.version",
                "drupal/bartik": "self.version",
                "drupal/basic_auth": "self.version",
                "drupal/big_pipe": "self.version",
                "drupal/block": "self.version",
                "drupal/block_content": "self.version",
                "drupal/block_place": "self.version",
                "drupal/book": "self.version",
                "drupal/breakpoint": "self.version",
                "drupal/ckeditor": "self.version",
                "drupal/claro": "self.version",
                "drupal/classy": "self.version",
                "drupal/color": "self.version",
                "drupal/comment": "self.version",
                "drupal/config": "self.version",
                "drupal/config_translation": "self.version",
                "drupal/contact": "self.version",
                "drupal/content_moderation": "self.version",
                "drupal/content_translation": "self.version",
                "drupal/contextual": "self.version",
                "drupal/core-annotation": "self.version",
                "drupal/core-assertion": "self.version",
                "drupal/core-bridge": "self.version",
                "drupal/core-class-finder": "self.version",
                "drupal/core-datetime": "self.version",
                "drupal/core-dependency-injection": "self.version",
                "drupal/core-diff": "self.version",
                "drupal/core-discovery": "self.version",
                "drupal/core-event-dispatcher": "self.version",
                "drupal/core-file-cache": "self.version",
                "drupal/core-file-security": "self.version",
                "drupal/core-filesystem": "self.version",
                "drupal/core-gettext": "self.version",
                "drupal/core-graph": "self.version",
                "drupal/core-http-foundation": "self.version",
                "drupal/core-php-storage": "self.version",
                "drupal/core-plugin": "self.version",
                "drupal/core-proxy-builder": "self.version",
                "drupal/core-render": "self.version",
                "drupal/core-serialization": "self.version",
                "drupal/core-transliteration": "self.version",
                "drupal/core-utility": "self.version",
                "drupal/core-uuid": "self.version",
                "drupal/core-version": "self.version",
                "drupal/datetime": "self.version",
                "drupal/datetime_range": "self.version",
                "drupal/dblog": "self.version",
                "drupal/dynamic_page_cache": "self.version",
                "drupal/editor": "self.version",
                "drupal/entity_reference": "self.version",
                "drupal/field": "self.version",
                "drupal/field_layout": "self.version",
                "drupal/field_ui": "self.version",
                "drupal/file": "self.version",
                "drupal/filter": "self.version",
                "drupal/forum": "self.version",
                "drupal/hal": "self.version",
                "drupal/help": "self.version",
                "drupal/help_topics": "self.version",
                "drupal/history": "self.version",
                "drupal/image": "self.version",
                "drupal/inline_form_errors": "self.version",
                "drupal/jsonapi": "self.version",
                "drupal/language": "self.version",
                "drupal/layout_builder": "self.version",
                "drupal/layout_discovery": "self.version",
                "drupal/link": "self.version",
                "drupal/locale": "self.version",
                "drupal/media": "self.version",
                "drupal/media_library": "self.version",
                "drupal/menu_link_content": "self.version",
                "drupal/menu_ui": "self.version",
                "drupal/migrate": "self.version",
                "drupal/migrate_drupal": "self.version",
                "drupal/migrate_drupal_multilingual": "self.version",
                "drupal/migrate_drupal_ui": "self.version",
                "drupal/minimal": "self.version",
                "drupal/node": "self.version",
                "drupal/options": "self.version",
                "drupal/page_cache": "self.version",
                "drupal/path": "self.version",
                "drupal/path_alias": "self.version",
                "drupal/quickedit": "self.version",
                "drupal/rdf": "self.version",
                "drupal/responsive_image": "self.version",
                "drupal/rest": "self.version",
                "drupal/search": "self.version",
                "drupal/serialization": "self.version",
                "drupal/settings_tray": "self.version",
                "drupal/seven": "self.version",
                "drupal/shortcut": "self.version",
                "drupal/simpletest": "self.version",
                "drupal/standard": "self.version",
                "drupal/stark": "self.version",
                "drupal/statistics": "self.version",
                "drupal/syslog": "self.version",
                "drupal/system": "self.version",
                "drupal/taxonomy": "self.version",
                "drupal/telephone": "self.version",
                "drupal/text": "self.version",
                "drupal/toolbar": "self.version",
                "drupal/tour": "self.version",
                "drupal/tracker": "self.version",
                "drupal/update": "self.version",
                "drupal/user": "self.version",
                "drupal/views": "self.version",
                "drupal/views_ui": "self.version",
                "drupal/workflows": "self.version",
                "drupal/workspaces": "self.version"
            },
            "type": "drupal-core",
            "extra": {
                "drupal-scaffold": {
                    "file-mapping": {
                        "[project-root]/.editorconfig": "assets/scaffold/files/editorconfig",
                        "[project-root]/.gitattributes": "assets/scaffold/files/gitattributes",
                        "[web-root]/.csslintrc": "assets/scaffold/files/csslintrc",
                        "[web-root]/.eslintignore": "assets/scaffold/files/eslintignore",
                        "[web-root]/.eslintrc.json": "assets/scaffold/files/eslintrc.json",
                        "[web-root]/.ht.router.php": "assets/scaffold/files/ht.router.php",
                        "[web-root]/.htaccess": "assets/scaffold/files/htaccess",
                        "[web-root]/example.gitignore": "assets/scaffold/files/example.gitignore",
                        "[web-root]/index.php": "assets/scaffold/files/index.php",
                        "[web-root]/INSTALL.txt": "assets/scaffold/files/drupal.INSTALL.txt",
                        "[web-root]/README.txt": "assets/scaffold/files/drupal.README.txt",
                        "[web-root]/robots.txt": "assets/scaffold/files/robots.txt",
                        "[web-root]/update.php": "assets/scaffold/files/update.php",
                        "[web-root]/web.config": "assets/scaffold/files/web.config",
                        "[web-root]/sites/README.txt": "assets/scaffold/files/sites.README.txt",
                        "[web-root]/sites/development.services.yml": "assets/scaffold/files/development.services.yml",
                        "[web-root]/sites/example.settings.local.php": "assets/scaffold/files/example.settings.local.php",
                        "[web-root]/sites/example.sites.php": "assets/scaffold/files/example.sites.php",
                        "[web-root]/sites/default/default.services.yml": "assets/scaffold/files/default.services.yml",
                        "[web-root]/sites/default/default.settings.php": "assets/scaffold/files/default.settings.php",
                        "[web-root]/modules/README.txt": "assets/scaffold/files/modules.README.txt",
                        "[web-root]/profiles/README.txt": "assets/scaffold/files/profiles.README.txt",
                        "[web-root]/themes/README.txt": "assets/scaffold/files/themes.README.txt"
                    }
                }
            },
            "autoload": {
                "psr-4": {
                    "Drupal\\Core\\": "lib/Drupal/Core",
                    "Drupal\\Component\\": "lib/Drupal/Component",
                    "Drupal\\Driver\\": "../drivers/lib/Drupal/Driver"
                },
                "classmap": [
                    "lib/Drupal.php",
                    "lib/Drupal/Component/Utility/Timer.php",
                    "lib/Drupal/Component/Utility/Unicode.php",
                    "lib/Drupal/Core/Database/Database.php",
                    "lib/Drupal/Core/DrupalKernel.php",
                    "lib/Drupal/Core/DrupalKernelInterface.php",
                    "lib/Drupal/Core/Site/Settings.php"
                ]
            },
            "scripts": {
                "pre-autoload-dump": [
                    "Drupal\\Core\\Composer\\Composer::preAutoloadDump"
                ],
                "post-autoload-dump": [
                    "Drupal\\Core\\Composer\\Composer::ensureHtaccess"
                ]
            },
            "license": [
                "GPL-2.0-or-later"
            ],
            "description": "Drupal is an open source content management platform powering millions of websites and applications.",
            "source": {
                "type": "git",
                "url": "https://github.com/drupal/core.git",
                "reference": "e8ee964c562870381876e85d3f5eaaf8c8ecc9ee"
            }
        },
        {
            "name": "drupal/core-composer-scaffold",
            "version": "8.9.1",
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/drupal/core-composer-scaffold/zipball/07cdfe2799789fc0c2d0e3e1ba64cb5e2a973ece",
                "reference": "07cdfe2799789fc0c2d0e3e1ba64cb5e2a973ece",
                "shasum": ""
            },
            "require": {
                "composer-plugin-api": "^1 || ^2",
                "php": ">=7.0.8"
            },
            "conflict": {
                "drupal-composer/drupal-scaffold": "*"
            },
            "require-dev": {
                "composer/composer": "^1.8@stable"
            },
            "type": "composer-plugin",
            "extra": {
                "class": "Drupal\\Composer\\Plugin\\Scaffold\\Plugin",
                "branch-alias": {
                    "dev-master": "1.0.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Drupal\\Composer\\Plugin\\Scaffold\\": ""
                }
            },
            "license": [
                "GPL-2.0-or-later"
            ],
            "description": "A flexible Composer project scaffold builder.",
            "homepage": "https://www.drupal.org/project/drupal",
            "keywords": [
                "drupal"
            ],
            "source": {
                "type": "git",
                "url": "https://github.com/drupal/core-composer-scaffold.git",
                "reference": "07cdfe2799789fc0c2d0e3e1ba64cb5e2a973ece"
            }
        },
        {
            "name": "drupal/core-project-message",
            "version": "8.9.1",
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/drupal/core-project-message/zipball/e0e237d3da026a87784f70c1069345855340ec23",
                "reference": "e0e237d3da026a87784f70c1069345855340ec23",
                "shasum": ""
            },
            "require": {
                "composer-plugin-api": "^1.1 || ^2",
                "php": ">=7.0.8"
            },
            "type": "composer-plugin",
            "extra": {
                "class": "Drupal\\Composer\\Plugin\\ProjectMessage\\MessagePlugin"
            },
            "autoload": {
                "psr-4": {
                    "Drupal\\Composer\\Plugin\\ProjectMessage\\": "."
                }
            },
            "license": [
                "GPL-2.0-or-later"
            ],
            "description": "Adds a message after Composer installation.",
            "homepage": "https://www.drupal.org/project/drupal",
            "keywords": [
                "drupal"
            ],
            "source": {
                "type": "git",
                "url": "https://github.com/drupal/core-project-message.git",
                "reference": "e0e237d3da026a87784f70c1069345855340ec23"
            }
        },
        {
            "name": "drupal/core-recommended",
            "version": "8.9.1",
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/drupal/core-recommended/zipball/41042f9eaa35b027e6b2c42fa03edcb85da54a06",
                "reference": "41042f9eaa35b027e6b2c42fa03edcb85da54a06",
                "shasum": ""
            },
            "require": {
                "asm89/stack-cors": "1.3.0",
                "composer/semver": "1.5.1",
                "doctrine/annotations": "v1.4.0",
                "doctrine/cache": "v1.6.2",
                "doctrine/collections": "v1.4.0",
                "doctrine/common": "v2.7.3",
                "doctrine/inflector": "v1.2.0",
                "doctrine/lexer": "1.0.2",
                "drupal/core": "8.9.1",
                "easyrdf/easyrdf": "0.9.1",
                "egulias/email-validator": "2.1.17",
                "guzzlehttp/guzzle": "6.5.4",
                "guzzlehttp/promises": "v1.3.1",
                "guzzlehttp/psr7": "1.6.1",
                "laminas/laminas-diactoros": "1.8.7p2",
                "laminas/laminas-escaper": "2.6.1",
                "laminas/laminas-feed": "2.12.2",
                "laminas/laminas-stdlib": "3.2.1",
                "laminas/laminas-zendframework-bridge": "1.0.4",
                "masterminds/html5": "2.3.0",
                "paragonie/random_compat": "v9.99.99",
                "pear/archive_tar": "1.4.9",
                "pear/console_getopt": "v1.4.3",
                "pear/pear-core-minimal": "v1.10.10",
                "pear/pear_exception": "v1.0.1",
                "psr/container": "1.0.0",
                "psr/http-message": "1.0.1",
                "psr/log": "1.1.3",
                "ralouphie/getallheaders": "3.0.3",
                "stack/builder": "v1.0.5",
                "symfony-cmf/routing": "1.4.1",
                "symfony/class-loader": "v3.4.41",
                "symfony/console": "v3.4.41",
                "symfony/debug": "v3.4.41",
                "symfony/dependency-injection": "v3.4.41",
                "symfony/event-dispatcher": "v3.4.41",
                "symfony/http-foundation": "v3.4.41",
                "symfony/http-kernel": "v3.4.41",
                "symfony/polyfill-ctype": "v1.17.0",
                "symfony/polyfill-iconv": "v1.17.0",
                "symfony/polyfill-intl-idn": "v1.17.0",
                "symfony/polyfill-mbstring": "v1.17.0",
                "symfony/polyfill-php56": "v1.17.0",
                "symfony/polyfill-php70": "v1.17.0",
                "symfony/polyfill-php72": "v1.17.0",
                "symfony/polyfill-util": "v1.17.0",
                "symfony/process": "v3.4.41",
                "symfony/psr-http-message-bridge": "v1.1.2",
                "symfony/routing": "v3.4.41",
                "symfony/serializer": "v3.4.41",
                "symfony/translation": "v3.4.41",
                "symfony/validator": "v3.4.41",
                "symfony/yaml": "v3.4.41",
                "twig/twig": "v1.42.5",
                "typo3/phar-stream-wrapper": "v3.1.4"
            },
            "conflict": {
                "webflo/drupal-core-strict": "*"
            },
            "type": "metapackage",
            "license": [
                "GPL-2.0-or-later"
            ],
            "description": "Locked core dependencies; require this project INSTEAD OF drupal/core.",
            "source": {
                "type": "git",
                "url": "https://github.com/drupal/core-recommended.git",
                "reference": "41042f9eaa35b027e6b2c42fa03edcb85da54a06"
            }
        },
        {
            "name": "drupal/core-vendor-hardening",
            "version": "8.9.1",
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/drupal/core-vendor-hardening/zipball/f66104f9ef51318993d743dc1411b0e6d0992513",
                "reference": "f66104f9ef51318993d743dc1411b0e6d0992513",
                "shasum": ""
            },
            "require": {
                "composer-plugin-api": "^1.1 || ^2",
                "php": ">=7.0.8"
            },
            "type": "composer-plugin",
            "extra": {
                "class": "Drupal\\Composer\\Plugin\\VendorHardening\\VendorHardeningPlugin"
            },
            "autoload": {
                "psr-4": {
                    "Drupal\\Composer\\Plugin\\VendorHardening\\": "."
                }
            },
            "license": [
                "GPL-2.0-or-later"
            ],
            "description": "Hardens the vendor directory for when it's in the docroot.",
            "homepage": "https://www.drupal.org/project/drupal",
            "keywords": [
                "drupal"
            ],
            "source": {
                "type": "git",
                "url": "https://github.com/drupal/core-vendor-hardening.git",
                "reference": "f66104f9ef51318993d743dc1411b0e6d0992513"
            }
        },
        {
            "name": "easyrdf/easyrdf",
            "version": "0.9.1",
            "source": {
                "type": "git",
                "url": "https://github.com/easyrdf/easyrdf.git",
                "reference": "acd09dfe0555fbcfa254291e433c45fdd4652566"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/easyrdf/easyrdf/zipball/acd09dfe0555fbcfa254291e433c45fdd4652566",
                "reference": "acd09dfe0555fbcfa254291e433c45fdd4652566",
                "shasum": ""
            },
            "require": {
                "ext-mbstring": "*",
                "ext-pcre": "*",
                "php": ">=5.2.8"
            },
            "require-dev": {
                "phpunit/phpunit": "~3.5",
                "sami/sami": "~1.4",
                "squizlabs/php_codesniffer": "~1.4.3"
            },
            "suggest": {
                "ml/json-ld": "~1.0"
            },
            "type": "library",
            "autoload": {
                "psr-0": {
                    "EasyRdf_": "lib/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "authors": [
                {
                    "name": "Nicholas Humfrey",
                    "email": "njh@aelius.com",
                    "homepage": "http://www.aelius.com/njh/",
                    "role": "Developer"
                },
                {
                    "name": "Alexey Zakhlestin",
                    "email": "indeyets@gmail.com",
                    "role": "Developer"
                }
            ],
            "description": "EasyRdf is a PHP library designed to make it easy to consume and produce RDF.",
            "homepage": "http://www.easyrdf.org/",
            "keywords": [
                "Linked Data",
                "RDF",
                "Semantic Web",
                "Turtle",
                "rdfa",
                "sparql"
            ],
            "time": "2015-02-27T09:45:49+00:00"
        },
        {
            "name": "egulias/email-validator",
            "version": "2.1.17",
            "source": {
                "type": "git",
                "url": "https://github.com/egulias/EmailValidator.git",
                "reference": "ade6887fd9bd74177769645ab5c474824f8a418a"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/egulias/EmailValidator/zipball/ade6887fd9bd74177769645ab5c474824f8a418a",
                "reference": "ade6887fd9bd74177769645ab5c474824f8a418a",
                "shasum": ""
            },
            "require": {
                "doctrine/lexer": "^1.0.1",
                "php": ">=5.5",
                "symfony/polyfill-intl-idn": "^1.10"
            },
            "require-dev": {
                "dominicsayers/isemail": "^3.0.7",
                "phpunit/phpunit": "^4.8.36|^7.5.15",
                "satooshi/php-coveralls": "^1.0.1"
            },
            "suggest": {
                "ext-intl": "PHP Internationalization Libraries are required to use the SpoofChecking validation"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "2.1.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Egulias\\EmailValidator\\": "EmailValidator"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Eduardo Gulias Davis"
                }
            ],
            "description": "A library for validating emails against several RFCs",
            "homepage": "https://github.com/egulias/EmailValidator",
            "keywords": [
                "email",
                "emailvalidation",
                "emailvalidator",
                "validation",
                "validator"
            ],
            "time": "2020-02-13T22:36:52+00:00"
        },
        {
            "name": "guzzlehttp/guzzle",
            "version": "6.5.4",
            "source": {
                "type": "git",
                "url": "https://github.com/guzzle/guzzle.git",
                "reference": "a4a1b6930528a8f7ee03518e6442ec7a44155d9d"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/guzzle/guzzle/zipball/a4a1b6930528a8f7ee03518e6442ec7a44155d9d",
                "reference": "a4a1b6930528a8f7ee03518e6442ec7a44155d9d",
                "shasum": ""
            },
            "require": {
                "ext-json": "*",
                "guzzlehttp/promises": "^1.0",
                "guzzlehttp/psr7": "^1.6.1",
                "php": ">=5.5",
                "symfony/polyfill-intl-idn": "1.17.0"
            },
            "require-dev": {
                "ext-curl": "*",
                "phpunit/phpunit": "^4.8.35 || ^5.7 || ^6.4 || ^7.0",
                "psr/log": "^1.1"
            },
            "suggest": {
                "psr/log": "Required for using the Log middleware"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "6.5-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "GuzzleHttp\\": "src/"
                },
                "files": [
                    "src/functions_include.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Michael Dowling",
                    "email": "mtdowling@gmail.com",
                    "homepage": "https://github.com/mtdowling"
                }
            ],
            "description": "Guzzle is a PHP HTTP client library",
            "homepage": "http://guzzlephp.org/",
            "keywords": [
                "client",
                "curl",
                "framework",
                "http",
                "http client",
                "rest",
                "web service"
            ],
            "time": "2020-05-25T19:35:05+00:00"
        },
        {
            "name": "guzzlehttp/promises",
            "version": "v1.3.1",
            "source": {
                "type": "git",
                "url": "https://github.com/guzzle/promises.git",
                "reference": "a59da6cf61d80060647ff4d3eb2c03a2bc694646"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/guzzle/promises/zipball/a59da6cf61d80060647ff4d3eb2c03a2bc694646",
                "reference": "a59da6cf61d80060647ff4d3eb2c03a2bc694646",
                "shasum": ""
            },
            "require": {
                "php": ">=5.5.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^4.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "GuzzleHttp\\Promise\\": "src/"
                },
                "files": [
                    "src/functions_include.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Michael Dowling",
                    "email": "mtdowling@gmail.com",
                    "homepage": "https://github.com/mtdowling"
                }
            ],
            "description": "Guzzle promises library",
            "keywords": [
                "promise"
            ],
            "time": "2016-12-20T10:07:11+00:00"
        },
        {
            "name": "guzzlehttp/psr7",
            "version": "1.6.1",
            "source": {
                "type": "git",
                "url": "https://github.com/guzzle/psr7.git",
                "reference": "239400de7a173fe9901b9ac7c06497751f00727a"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/guzzle/psr7/zipball/239400de7a173fe9901b9ac7c06497751f00727a",
                "reference": "239400de7a173fe9901b9ac7c06497751f00727a",
                "shasum": ""
            },
            "require": {
                "php": ">=5.4.0",
                "psr/http-message": "~1.0",
                "ralouphie/getallheaders": "^2.0.5 || ^3.0.0"
            },
            "provide": {
                "psr/http-message-implementation": "1.0"
            },
            "require-dev": {
                "ext-zlib": "*",
                "phpunit/phpunit": "~4.8.36 || ^5.7.27 || ^6.5.8"
            },
            "suggest": {
                "zendframework/zend-httphandlerrunner": "Emit PSR-7 responses"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.6-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "GuzzleHttp\\Psr7\\": "src/"
                },
                "files": [
                    "src/functions_include.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Michael Dowling",
                    "email": "mtdowling@gmail.com",
                    "homepage": "https://github.com/mtdowling"
                },
                {
                    "name": "Tobias Schultze",
                    "homepage": "https://github.com/Tobion"
                }
            ],
            "description": "PSR-7 message implementation that also provides common utility methods",
            "keywords": [
                "http",
                "message",
                "psr-7",
                "request",
                "response",
                "stream",
                "uri",
                "url"
            ],
            "time": "2019-07-01T23:21:34+00:00"
        },
        {
            "name": "laminas/laminas-diactoros",
            "version": "1.8.7p2",
            "source": {
                "type": "git",
                "url": "https://github.com/laminas/laminas-diactoros.git",
                "reference": "6991c1af7c8d2c8efee81b22ba97024781824aaa"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/laminas/laminas-diactoros/zipball/6991c1af7c8d2c8efee81b22ba97024781824aaa",
                "reference": "6991c1af7c8d2c8efee81b22ba97024781824aaa",
                "shasum": ""
            },
            "require": {
                "laminas/laminas-zendframework-bridge": "^1.0",
                "php": "^5.6 || ^7.0",
                "psr/http-message": "^1.0"
            },
            "provide": {
                "psr/http-message-implementation": "1.0"
            },
            "replace": {
                "zendframework/zend-diactoros": "~1.8.7.0"
            },
            "require-dev": {
                "ext-dom": "*",
                "ext-libxml": "*",
                "laminas/laminas-coding-standard": "~1.0",
                "php-http/psr7-integration-tests": "dev-master",
                "phpunit/phpunit": "^5.7.16 || ^6.0.8 || ^7.2.7"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-release-1.8": "1.8.x-dev"
                }
            },
            "autoload": {
                "files": [
                    "src/functions/create_uploaded_file.php",
                    "src/functions/marshal_headers_from_sapi.php",
                    "src/functions/marshal_method_from_sapi.php",
                    "src/functions/marshal_protocol_version_from_sapi.php",
                    "src/functions/marshal_uri_from_sapi.php",
                    "src/functions/normalize_server.php",
                    "src/functions/normalize_uploaded_files.php",
                    "src/functions/parse_cookie_header.php",
                    "src/functions/create_uploaded_file.legacy.php",
                    "src/functions/marshal_headers_from_sapi.legacy.php",
                    "src/functions/marshal_method_from_sapi.legacy.php",
                    "src/functions/marshal_protocol_version_from_sapi.legacy.php",
                    "src/functions/marshal_uri_from_sapi.legacy.php",
                    "src/functions/normalize_server.legacy.php",
                    "src/functions/normalize_uploaded_files.legacy.php",
                    "src/functions/parse_cookie_header.legacy.php"
                ],
                "psr-4": {
                    "Laminas\\Diactoros\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "description": "PSR HTTP Message implementations",
            "homepage": "https://laminas.dev",
            "keywords": [
                "http",
                "laminas",
                "psr",
                "psr-7"
            ],
            "time": "2020-03-23T15:28:28+00:00"
        },
        {
            "name": "laminas/laminas-escaper",
            "version": "2.6.1",
            "source": {
                "type": "git",
                "url": "https://github.com/laminas/laminas-escaper.git",
                "reference": "25f2a053eadfa92ddacb609dcbbc39362610da70"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/laminas/laminas-escaper/zipball/25f2a053eadfa92ddacb609dcbbc39362610da70",
                "reference": "25f2a053eadfa92ddacb609dcbbc39362610da70",
                "shasum": ""
            },
            "require": {
                "laminas/laminas-zendframework-bridge": "^1.0",
                "php": "^5.6 || ^7.0"
            },
            "replace": {
                "zendframework/zend-escaper": "self.version"
            },
            "require-dev": {
                "laminas/laminas-coding-standard": "~1.0.0",
                "phpunit/phpunit": "^5.7.27 || ^6.5.8 || ^7.1.2"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "2.6.x-dev",
                    "dev-develop": "2.7.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Laminas\\Escaper\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "description": "Securely and safely escape HTML, HTML attributes, JavaScript, CSS, and URLs",
            "homepage": "https://laminas.dev",
            "keywords": [
                "escaper",
                "laminas"
            ],
            "time": "2019-12-31T16:43:30+00:00"
        },
        {
            "name": "laminas/laminas-feed",
            "version": "2.12.2",
            "source": {
                "type": "git",
                "url": "https://github.com/laminas/laminas-feed.git",
                "reference": "8a193ac96ebcb3e16b6ee754ac2a889eefacb654"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/laminas/laminas-feed/zipball/8a193ac96ebcb3e16b6ee754ac2a889eefacb654",
                "reference": "8a193ac96ebcb3e16b6ee754ac2a889eefacb654",
                "shasum": ""
            },
            "require": {
                "ext-dom": "*",
                "ext-libxml": "*",
                "laminas/laminas-escaper": "^2.5.2",
                "laminas/laminas-stdlib": "^3.2.1",
                "laminas/laminas-zendframework-bridge": "^1.0",
                "php": "^5.6 || ^7.0"
            },
            "replace": {
                "zendframework/zend-feed": "^2.12.0"
            },
            "require-dev": {
                "laminas/laminas-cache": "^2.7.2",
                "laminas/laminas-coding-standard": "~1.0.0",
                "laminas/laminas-db": "^2.8.2",
                "laminas/laminas-http": "^2.7",
                "laminas/laminas-servicemanager": "^2.7.8 || ^3.3",
                "laminas/laminas-validator": "^2.10.1",
                "phpunit/phpunit": "^5.7.27 || ^6.5.14 || ^7.5.20",
                "psr/http-message": "^1.0.1"
            },
            "suggest": {
                "laminas/laminas-cache": "Laminas\\Cache component, for optionally caching feeds between requests",
                "laminas/laminas-db": "Laminas\\Db component, for use with PubSubHubbub",
                "laminas/laminas-http": "Laminas\\Http for PubSubHubbub, and optionally for use with Laminas\\Feed\\Reader",
                "laminas/laminas-servicemanager": "Laminas\\ServiceManager component, for easily extending ExtensionManager implementations",
                "laminas/laminas-validator": "Laminas\\Validator component, for validating email addresses used in Atom feeds and entries when using the Writer subcomponent",
                "psr/http-message": "PSR-7 ^1.0.1, if you wish to use Laminas\\Feed\\Reader\\Http\\Psr7ResponseDecorator"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "2.12.x-dev",
                    "dev-develop": "2.13.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Laminas\\Feed\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "description": "provides functionality for consuming RSS and Atom feeds",
            "homepage": "https://laminas.dev",
            "keywords": [
                "feed",
                "laminas"
            ],
            "time": "2020-03-29T12:36:29+00:00"
        },
        {
            "name": "laminas/laminas-stdlib",
            "version": "3.2.1",
            "source": {
                "type": "git",
                "url": "https://github.com/laminas/laminas-stdlib.git",
                "reference": "2b18347625a2f06a1a485acfbc870f699dbe51c6"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/laminas/laminas-stdlib/zipball/2b18347625a2f06a1a485acfbc870f699dbe51c6",
                "reference": "2b18347625a2f06a1a485acfbc870f699dbe51c6",
                "shasum": ""
            },
            "require": {
                "laminas/laminas-zendframework-bridge": "^1.0",
                "php": "^5.6 || ^7.0"
            },
            "replace": {
                "zendframework/zend-stdlib": "self.version"
            },
            "require-dev": {
                "laminas/laminas-coding-standard": "~1.0.0",
                "phpbench/phpbench": "^0.13",
                "phpunit/phpunit": "^5.7.27 || ^6.5.8 || ^7.1.2"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.2.x-dev",
                    "dev-develop": "3.3.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Laminas\\Stdlib\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "description": "SPL extensions, array utilities, error handlers, and more",
            "homepage": "https://laminas.dev",
            "keywords": [
                "laminas",
                "stdlib"
            ],
            "time": "2019-12-31T17:51:15+00:00"
        },
        {
            "name": "laminas/laminas-zendframework-bridge",
            "version": "1.0.4",
            "source": {
                "type": "git",
                "url": "https://github.com/laminas/laminas-zendframework-bridge.git",
                "reference": "fcd87520e4943d968557803919523772475e8ea3"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/laminas/laminas-zendframework-bridge/zipball/fcd87520e4943d968557803919523772475e8ea3",
                "reference": "fcd87520e4943d968557803919523772475e8ea3",
                "shasum": ""
            },
            "require": {
                "php": "^5.6 || ^7.0"
            },
            "require-dev": {
                "phpunit/phpunit": "^5.7 || ^6.5 || ^7.5 || ^8.1",
                "squizlabs/php_codesniffer": "^3.5"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0.x-dev",
                    "dev-develop": "1.1.x-dev"
                },
                "laminas": {
                    "module": "Laminas\\ZendFrameworkBridge"
                }
            },
            "autoload": {
                "files": [
                    "src/autoload.php"
                ],
                "psr-4": {
                    "Laminas\\ZendFrameworkBridge\\": "src//"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "description": "Alias legacy ZF class names to Laminas Project equivalents.",
            "keywords": [
                "ZendFramework",
                "autoloading",
                "laminas",
                "zf"
            ],
            "funding": [
                {
                    "url": "https://funding.communitybridge.org/projects/laminas-project",
                    "type": "community_bridge"
                }
            ],
            "time": "2020-05-20T16:45:56+00:00"
        },
        {
            "name": "masterminds/html5",
            "version": "2.3.0",
            "source": {
                "type": "git",
                "url": "https://github.com/Masterminds/html5-php.git",
                "reference": "2c37c6c520b995b761674de3be8455a381679067"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/Masterminds/html5-php/zipball/2c37c6c520b995b761674de3be8455a381679067",
                "reference": "2c37c6c520b995b761674de3be8455a381679067",
                "shasum": ""
            },
            "require": {
                "ext-libxml": "*",
                "php": ">=5.3.0"
            },
            "require-dev": {
                "phpunit/phpunit": "4.*",
                "sami/sami": "~2.0",
                "satooshi/php-coveralls": "1.0.*"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "2.2-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Masterminds\\": "src"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Matt Butcher",
                    "email": "technosophos@gmail.com"
                },
                {
                    "name": "Asmir Mustafic",
                    "email": "goetas@gmail.com"
                },
                {
                    "name": "Matt Farina",
                    "email": "matt@mattfarina.com"
                }
            ],
            "description": "An HTML5 parser and serializer.",
            "homepage": "http://masterminds.github.io/html5-php",
            "keywords": [
                "HTML5",
                "dom",
                "html",
                "parser",
                "querypath",
                "serializer",
                "xml"
            ],
            "time": "2017-09-04T12:26:28+00:00"
        },
        {
            "name": "paragonie/random_compat",
            "version": "v9.99.99",
            "source": {
                "type": "git",
                "url": "https://github.com/paragonie/random_compat.git",
                "reference": "84b4dfb120c6f9b4ff7b3685f9b8f1aa365a0c95"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/paragonie/random_compat/zipball/84b4dfb120c6f9b4ff7b3685f9b8f1aa365a0c95",
                "reference": "84b4dfb120c6f9b4ff7b3685f9b8f1aa365a0c95",
                "shasum": ""
            },
            "require": {
                "php": "^7"
            },
            "require-dev": {
                "phpunit/phpunit": "4.*|5.*",
                "vimeo/psalm": "^1"
            },
            "suggest": {
                "ext-libsodium": "Provides a modern crypto API that can be used to generate random bytes."
            },
            "type": "library",
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Paragon Initiative Enterprises",
                    "email": "security@paragonie.com",
                    "homepage": "https://paragonie.com"
                }
            ],
            "description": "PHP 5.x polyfill for random_bytes() and random_int() from PHP 7",
            "keywords": [
                "csprng",
                "polyfill",
                "pseudorandom",
                "random"
            ],
            "time": "2018-07-02T15:55:56+00:00"
        },
        {
            "name": "pear/archive_tar",
            "version": "1.4.9",
            "source": {
                "type": "git",
                "url": "https://github.com/pear/Archive_Tar.git",
                "reference": "c5b00053770e1d72128252c62c2c1a12c26639f0"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/pear/Archive_Tar/zipball/c5b00053770e1d72128252c62c2c1a12c26639f0",
                "reference": "c5b00053770e1d72128252c62c2c1a12c26639f0",
                "shasum": ""
            },
            "require": {
                "pear/pear-core-minimal": "^1.10.0alpha2",
                "php": ">=5.2.0"
            },
            "require-dev": {
                "phpunit/phpunit": "*"
            },
            "suggest": {
                "ext-bz2": "Bz2 compression support.",
                "ext-xz": "Lzma2 compression support.",
                "ext-zlib": "Gzip compression support."
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.4.x-dev"
                }
            },
            "autoload": {
                "psr-0": {
                    "Archive_Tar": ""
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "include-path": [
                "./"
            ],
            "license": [
                "BSD-3-Clause"
            ],
            "authors": [
                {
                    "name": "Vincent Blavet",
                    "email": "vincent@phpconcept.net"
                },
                {
                    "name": "Greg Beaver",
                    "email": "greg@chiaraquartet.net"
                },
                {
                    "name": "Michiel Rook",
                    "email": "mrook@php.net"
                }
            ],
            "description": "Tar file management class with compression support (gzip, bzip2, lzma2)",
            "homepage": "https://github.com/pear/Archive_Tar",
            "keywords": [
                "archive",
                "tar"
            ],
            "time": "2019-12-04T10:17:28+00:00"
        },
        {
            "name": "pear/console_getopt",
            "version": "v1.4.3",
            "source": {
                "type": "git",
                "url": "https://github.com/pear/Console_Getopt.git",
                "reference": "a41f8d3e668987609178c7c4a9fe48fecac53fa0"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/pear/Console_Getopt/zipball/a41f8d3e668987609178c7c4a9fe48fecac53fa0",
                "reference": "a41f8d3e668987609178c7c4a9fe48fecac53fa0",
                "shasum": ""
            },
            "type": "library",
            "autoload": {
                "psr-0": {
                    "Console": "./"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "include-path": [
                "./"
            ],
            "license": [
                "BSD-2-Clause"
            ],
            "authors": [
                {
                    "name": "Andrei Zmievski",
                    "email": "andrei@php.net",
                    "role": "Lead"
                },
                {
                    "name": "Stig Bakken",
                    "email": "stig@php.net",
                    "role": "Developer"
                },
                {
                    "name": "Greg Beaver",
                    "email": "cellog@php.net",
                    "role": "Helper"
                }
            ],
            "description": "More info available on: http://pear.php.net/package/Console_Getopt",
            "time": "2019-11-20T18:27:48+00:00"
        },
        {
            "name": "pear/pear-core-minimal",
            "version": "v1.10.10",
            "source": {
                "type": "git",
                "url": "https://github.com/pear/pear-core-minimal.git",
                "reference": "625a3c429d9b2c1546438679074cac1b089116a7"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/pear/pear-core-minimal/zipball/625a3c429d9b2c1546438679074cac1b089116a7",
                "reference": "625a3c429d9b2c1546438679074cac1b089116a7",
                "shasum": ""
            },
            "require": {
                "pear/console_getopt": "~1.4",
                "pear/pear_exception": "~1.0"
            },
            "replace": {
                "rsky/pear-core-min": "self.version"
            },
            "type": "library",
            "autoload": {
                "psr-0": {
                    "": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "include-path": [
                "src/"
            ],
            "license": [
                "BSD-3-Clause"
            ],
            "authors": [
                {
                    "name": "Christian Weiske",
                    "email": "cweiske@php.net",
                    "role": "Lead"
                }
            ],
            "description": "Minimal set of PEAR core files to be used as composer dependency",
            "time": "2019-11-19T19:00:24+00:00"
        },
        {
            "name": "pear/pear_exception",
            "version": "v1.0.1",
            "source": {
                "type": "git",
                "url": "https://github.com/pear/PEAR_Exception.git",
                "reference": "dbb42a5a0e45f3adcf99babfb2a1ba77b8ac36a7"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/pear/PEAR_Exception/zipball/dbb42a5a0e45f3adcf99babfb2a1ba77b8ac36a7",
                "reference": "dbb42a5a0e45f3adcf99babfb2a1ba77b8ac36a7",
                "shasum": ""
            },
            "require": {
                "php": ">=4.4.0"
            },
            "require-dev": {
                "phpunit/phpunit": "*"
            },
            "type": "class",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0.x-dev"
                }
            },
            "autoload": {
                "classmap": [
                    "PEAR/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "include-path": [
                "."
            ],
            "license": [
                "BSD-2-Clause"
            ],
            "authors": [
                {
                    "name": "Helgi Thormar",
                    "email": "dufuz@php.net"
                },
                {
                    "name": "Greg Beaver",
                    "email": "cellog@php.net"
                }
            ],
            "description": "The PEAR Exception base class.",
            "homepage": "https://github.com/pear/PEAR_Exception",
            "keywords": [
                "exception"
            ],
            "time": "2019-12-10T10:24:42+00:00"
        },
        {
            "name": "psr/container",
            "version": "1.0.0",
            "source": {
                "type": "git",
                "url": "https://github.com/php-fig/container.git",
                "reference": "b7ce3b176482dbbc1245ebf52b181af44c2cf55f"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/php-fig/container/zipball/b7ce3b176482dbbc1245ebf52b181af44c2cf55f",
                "reference": "b7ce3b176482dbbc1245ebf52b181af44c2cf55f",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Psr\\Container\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "PHP-FIG",
                    "homepage": "http://www.php-fig.org/"
                }
            ],
            "description": "Common Container Interface (PHP FIG PSR-11)",
            "homepage": "https://github.com/php-fig/container",
            "keywords": [
                "PSR-11",
                "container",
                "container-interface",
                "container-interop",
                "psr"
            ],
            "time": "2017-02-14T16:28:37+00:00"
        },
        {
            "name": "psr/http-message",
            "version": "1.0.1",
            "source": {
                "type": "git",
                "url": "https://github.com/php-fig/http-message.git",
                "reference": "f6561bf28d520154e4b0ec72be95418abe6d9363"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/php-fig/http-message/zipball/f6561bf28d520154e4b0ec72be95418abe6d9363",
                "reference": "f6561bf28d520154e4b0ec72be95418abe6d9363",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Psr\\Http\\Message\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "PHP-FIG",
                    "homepage": "http://www.php-fig.org/"
                }
            ],
            "description": "Common interface for HTTP messages",
            "homepage": "https://github.com/php-fig/http-message",
            "keywords": [
                "http",
                "http-message",
                "psr",
                "psr-7",
                "request",
                "response"
            ],
            "time": "2016-08-06T14:39:51+00:00"
        },
        {
            "name": "psr/log",
            "version": "1.1.3",
            "source": {
                "type": "git",
                "url": "https://github.com/php-fig/log.git",
                "reference": "0f73288fd15629204f9d42b7055f72dacbe811fc"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/php-fig/log/zipball/0f73288fd15629204f9d42b7055f72dacbe811fc",
                "reference": "0f73288fd15629204f9d42b7055f72dacbe811fc",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.1.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Psr\\Log\\": "Psr/Log/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "PHP-FIG",
                    "homepage": "http://www.php-fig.org/"
                }
            ],
            "description": "Common interface for logging libraries",
            "homepage": "https://github.com/php-fig/log",
            "keywords": [
                "log",
                "psr",
                "psr-3"
            ],
            "time": "2020-03-23T09:12:05+00:00"
        },
        {
            "name": "ralouphie/getallheaders",
            "version": "3.0.3",
            "source": {
                "type": "git",
                "url": "https://github.com/ralouphie/getallheaders.git",
                "reference": "120b605dfeb996808c31b6477290a714d356e822"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/ralouphie/getallheaders/zipball/120b605dfeb996808c31b6477290a714d356e822",
                "reference": "120b605dfeb996808c31b6477290a714d356e822",
                "shasum": ""
            },
            "require": {
                "php": ">=5.6"
            },
            "require-dev": {
                "php-coveralls/php-coveralls": "^2.1",
                "phpunit/phpunit": "^5 || ^6.5"
            },
            "type": "library",
            "autoload": {
                "files": [
                    "src/getallheaders.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Ralph Khattar",
                    "email": "ralph.khattar@gmail.com"
                }
            ],
            "description": "A polyfill for getallheaders.",
            "time": "2019-03-08T08:55:37+00:00"
        },
        {
            "name": "stack/builder",
            "version": "v1.0.5",
            "source": {
                "type": "git",
                "url": "https://github.com/stackphp/builder.git",
                "reference": "fb3d136d04c6be41120ebf8c0cc71fe9507d750a"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/stackphp/builder/zipball/fb3d136d04c6be41120ebf8c0cc71fe9507d750a",
                "reference": "fb3d136d04c6be41120ebf8c0cc71fe9507d750a",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.0",
                "symfony/http-foundation": "~2.1|~3.0|~4.0",
                "symfony/http-kernel": "~2.1|~3.0|~4.0"
            },
            "require-dev": {
                "silex/silex": "~1.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.0-dev"
                }
            },
            "autoload": {
                "psr-0": {
                    "Stack": "src"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Igor Wiedler",
                    "email": "igor@wiedler.ch"
                }
            ],
            "description": "Builder for stack middlewares based on HttpKernelInterface.",
            "keywords": [
                "stack"
            ],
            "time": "2017-11-18T14:57:29+00:00"
        },
        {
            "name": "symfony-cmf/routing",
            "version": "1.4.1",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony-cmf/routing.git",
                "reference": "fb1e7f85ff8c6866238b7e73a490a0a0243ae8ac"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony-cmf/routing/zipball/fb1e7f85ff8c6866238b7e73a490a0a0243ae8ac",
                "reference": "fb1e7f85ff8c6866238b7e73a490a0a0243ae8ac",
                "shasum": ""
            },
            "require": {
                "php": "^5.3.9|^7.0",
                "psr/log": "1.*",
                "symfony/http-kernel": "^2.2|3.*",
                "symfony/routing": "^2.2|3.*"
            },
            "require-dev": {
                "friendsofsymfony/jsrouting-bundle": "^1.1",
                "symfony-cmf/testing": "^1.3",
                "symfony/config": "^2.2|3.*",
                "symfony/dependency-injection": "^2.0.5|3.*",
                "symfony/event-dispatcher": "^2.1|3.*"
            },
            "suggest": {
                "symfony/event-dispatcher": "DynamicRouter can optionally trigger an event at the start of matching. Minimal version (~2.1)"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Cmf\\Component\\Routing\\": ""
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Symfony CMF Community",
                    "homepage": "https://github.com/symfony-cmf/Routing/contributors"
                }
            ],
            "description": "Extends the Symfony2 routing component for dynamic routes and chaining several routers",
            "homepage": "http://cmf.symfony.com",
            "keywords": [
                "database",
                "routing"
            ],
            "time": "2017-05-09T08:10:41+00:00"
        },
        {
            "name": "symfony/class-loader",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/class-loader.git",
                "reference": "e4636a4f23f157278a19e5db160c63de0da297d8"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/class-loader/zipball/e4636a4f23f157278a19e5db160c63de0da297d8",
                "reference": "e4636a4f23f157278a19e5db160c63de0da297d8",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8"
            },
            "require-dev": {
                "symfony/finder": "~2.8|~3.0|~4.0",
                "symfony/polyfill-apcu": "~1.1"
            },
            "suggest": {
                "symfony/polyfill-apcu": "For using ApcClassLoader on HHVM"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\ClassLoader\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony ClassLoader Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-03-15T09:38:08+00:00"
        },
        {
            "name": "symfony/console",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/console.git",
                "reference": "bfe29ead7e7b1cc9ce74c6a40d06ad1f96fced13"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/console/zipball/bfe29ead7e7b1cc9ce74c6a40d06ad1f96fced13",
                "reference": "bfe29ead7e7b1cc9ce74c6a40d06ad1f96fced13",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/debug": "~2.8|~3.0|~4.0",
                "symfony/polyfill-mbstring": "~1.0"
            },
            "conflict": {
                "symfony/dependency-injection": "<3.4",
                "symfony/process": "<3.3"
            },
            "provide": {
                "psr/log-implementation": "1.0"
            },
            "require-dev": {
                "psr/log": "~1.0",
                "symfony/config": "~3.3|~4.0",
                "symfony/dependency-injection": "~3.4|~4.0",
                "symfony/event-dispatcher": "~2.8|~3.0|~4.0",
                "symfony/lock": "~3.4|~4.0",
                "symfony/process": "~3.3|~4.0"
            },
            "suggest": {
                "psr/log": "For using the console logger",
                "symfony/event-dispatcher": "",
                "symfony/lock": "",
                "symfony/process": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Console\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Console Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T18:58:05+00:00"
        },
        {
            "name": "symfony/debug",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/debug.git",
                "reference": "518c6a00d0872da30bd06aee3ea59a0a5cf54d6d"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/debug/zipball/518c6a00d0872da30bd06aee3ea59a0a5cf54d6d",
                "reference": "518c6a00d0872da30bd06aee3ea59a0a5cf54d6d",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "psr/log": "~1.0"
            },
            "conflict": {
                "symfony/http-kernel": ">=2.3,<2.3.24|~2.4.0|>=2.5,<2.5.9|>=2.6,<2.6.2"
            },
            "require-dev": {
                "symfony/http-kernel": "~2.8|~3.0|~4.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Debug\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Debug Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-22T18:25:20+00:00"
        },
        {
            "name": "symfony/dependency-injection",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/dependency-injection.git",
                "reference": "e39380b7104b0ec538a075ae919f00c7e5267bac"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/dependency-injection/zipball/e39380b7104b0ec538a075ae919f00c7e5267bac",
                "reference": "e39380b7104b0ec538a075ae919f00c7e5267bac",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "psr/container": "^1.0"
            },
            "conflict": {
                "symfony/config": "<3.3.7",
                "symfony/finder": "<3.3",
                "symfony/proxy-manager-bridge": "<3.4",
                "symfony/yaml": "<3.4"
            },
            "provide": {
                "psr/container-implementation": "1.0"
            },
            "require-dev": {
                "symfony/config": "~3.3|~4.0",
                "symfony/expression-language": "~2.8|~3.0|~4.0",
                "symfony/yaml": "~3.4|~4.0"
            },
            "suggest": {
                "symfony/config": "",
                "symfony/expression-language": "For using expressions in service container configuration",
                "symfony/finder": "For using double-star glob patterns or when GLOB_BRACE portability is required",
                "symfony/proxy-manager-bridge": "Generate service proxies to lazy load them",
                "symfony/yaml": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\DependencyInjection\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony DependencyInjection Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T21:06:01+00:00"
        },
        {
            "name": "symfony/event-dispatcher",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/event-dispatcher.git",
                "reference": "14d978f8e8555f2de719c00eb65376be7d2e9081"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/event-dispatcher/zipball/14d978f8e8555f2de719c00eb65376be7d2e9081",
                "reference": "14d978f8e8555f2de719c00eb65376be7d2e9081",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8"
            },
            "conflict": {
                "symfony/dependency-injection": "<3.3"
            },
            "require-dev": {
                "psr/log": "~1.0",
                "symfony/config": "~2.8|~3.0|~4.0",
                "symfony/dependency-injection": "~3.3|~4.0",
                "symfony/expression-language": "~2.8|~3.0|~4.0",
                "symfony/stopwatch": "~2.8|~3.0|~4.0"
            },
            "suggest": {
                "symfony/dependency-injection": "",
                "symfony/http-kernel": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\EventDispatcher\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony EventDispatcher Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-05T15:06:23+00:00"
        },
        {
            "name": "symfony/http-foundation",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/http-foundation.git",
                "reference": "fbd216d2304b1a3fe38d6392b04729c8dd356359"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/http-foundation/zipball/fbd216d2304b1a3fe38d6392b04729c8dd356359",
                "reference": "fbd216d2304b1a3fe38d6392b04729c8dd356359",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/polyfill-mbstring": "~1.1",
                "symfony/polyfill-php70": "~1.6"
            },
            "require-dev": {
                "symfony/expression-language": "~2.8|~3.0|~4.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\HttpFoundation\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony HttpFoundation Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-16T13:15:54+00:00"
        },
        {
            "name": "symfony/http-kernel",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/http-kernel.git",
                "reference": "e4e4ed6c008c983645b4eee6b67d8f258cde54df"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/http-kernel/zipball/e4e4ed6c008c983645b4eee6b67d8f258cde54df",
                "reference": "e4e4ed6c008c983645b4eee6b67d8f258cde54df",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "psr/log": "~1.0",
                "symfony/debug": "^3.3.3|~4.0",
                "symfony/event-dispatcher": "~2.8|~3.0|~4.0",
                "symfony/http-foundation": "~3.4.12|~4.0.12|^4.1.1",
                "symfony/polyfill-ctype": "~1.8",
                "symfony/polyfill-php56": "~1.8"
            },
            "conflict": {
                "symfony/config": "<2.8",
                "symfony/dependency-injection": "<3.4.10|<4.0.10,>=4",
                "symfony/var-dumper": "<3.3",
                "twig/twig": "<1.34|<2.4,>=2"
            },
            "provide": {
                "psr/log-implementation": "1.0"
            },
            "require-dev": {
                "psr/cache": "~1.0",
                "symfony/browser-kit": "~2.8|~3.0|~4.0",
                "symfony/class-loader": "~2.8|~3.0",
                "symfony/config": "~2.8|~3.0|~4.0",
                "symfony/console": "~2.8|~3.0|~4.0",
                "symfony/css-selector": "~2.8|~3.0|~4.0",
                "symfony/dependency-injection": "^3.4.10|^4.0.10",
                "symfony/dom-crawler": "~2.8|~3.0|~4.0",
                "symfony/expression-language": "~2.8|~3.0|~4.0",
                "symfony/finder": "~2.8|~3.0|~4.0",
                "symfony/process": "~2.8|~3.0|~4.0",
                "symfony/routing": "~3.4|~4.0",
                "symfony/stopwatch": "~2.8|~3.0|~4.0",
                "symfony/templating": "~2.8|~3.0|~4.0",
                "symfony/translation": "~2.8|~3.0|~4.0",
                "symfony/var-dumper": "~3.3|~4.0"
            },
            "suggest": {
                "symfony/browser-kit": "",
                "symfony/config": "",
                "symfony/console": "",
                "symfony/dependency-injection": "",
                "symfony/finder": "",
                "symfony/var-dumper": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\HttpKernel\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony HttpKernel Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-31T05:14:17+00:00"
        },
        {
            "name": "symfony/polyfill-ctype",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-ctype.git",
                "reference": "e94c8b1bbe2bc77507a1056cdb06451c75b427f9"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-ctype/zipball/e94c8b1bbe2bc77507a1056cdb06451c75b427f9",
                "reference": "e94c8b1bbe2bc77507a1056cdb06451c75b427f9",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3"
            },
            "suggest": {
                "ext-ctype": "For best performance"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Ctype\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Gert de Pagter",
                    "email": "BackEndTea@gmail.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill for ctype functions",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "ctype",
                "polyfill",
                "portable"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:14:59+00:00"
        },
        {
            "name": "symfony/polyfill-iconv",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-iconv.git",
                "reference": "c4de7601eefbf25f9d47190abe07f79fe0a27424"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-iconv/zipball/c4de7601eefbf25f9d47190abe07f79fe0a27424",
                "reference": "c4de7601eefbf25f9d47190abe07f79fe0a27424",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3"
            },
            "suggest": {
                "ext-iconv": "For best performance"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Iconv\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill for the Iconv extension",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "iconv",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-intl-idn",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-intl-idn.git",
                "reference": "3bff59ea7047e925be6b7f2059d60af31bb46d6a"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-intl-idn/zipball/3bff59ea7047e925be6b7f2059d60af31bb46d6a",
                "reference": "3bff59ea7047e925be6b7f2059d60af31bb46d6a",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3",
                "symfony/polyfill-mbstring": "^1.3",
                "symfony/polyfill-php72": "^1.10"
            },
            "suggest": {
                "ext-intl": "For best performance"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Intl\\Idn\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Laurent Bassin",
                    "email": "laurent@bassin.info"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill for intl's idn_to_ascii and idn_to_utf8 functions",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "idn",
                "intl",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-mbstring",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-mbstring.git",
                "reference": "fa79b11539418b02fc5e1897267673ba2c19419c"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-mbstring/zipball/fa79b11539418b02fc5e1897267673ba2c19419c",
                "reference": "fa79b11539418b02fc5e1897267673ba2c19419c",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3"
            },
            "suggest": {
                "ext-mbstring": "For best performance"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Mbstring\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill for the Mbstring extension",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "mbstring",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-php56",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-php56.git",
                "reference": "e3c8c138280cdfe4b81488441555583aa1984e23"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-php56/zipball/e3c8c138280cdfe4b81488441555583aa1984e23",
                "reference": "e3c8c138280cdfe4b81488441555583aa1984e23",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3",
                "symfony/polyfill-util": "~1.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Php56\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill backporting some PHP 5.6+ features to lower PHP versions",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-php70",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-php70.git",
                "reference": "82225c2d7d23d7e70515496d249c0152679b468e"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-php70/zipball/82225c2d7d23d7e70515496d249c0152679b468e",
                "reference": "82225c2d7d23d7e70515496d249c0152679b468e",
                "shasum": ""
            },
            "require": {
                "paragonie/random_compat": "~1.0|~2.0|~9.99",
                "php": ">=5.3.3"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Php70\\": ""
                },
                "files": [
                    "bootstrap.php"
                ],
                "classmap": [
                    "Resources/stubs"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill backporting some PHP 7.0+ features to lower PHP versions",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-php72",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-php72.git",
                "reference": "f048e612a3905f34931127360bdd2def19a5e582"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-php72/zipball/f048e612a3905f34931127360bdd2def19a5e582",
                "reference": "f048e612a3905f34931127360bdd2def19a5e582",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Php72\\": ""
                },
                "files": [
                    "bootstrap.php"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony polyfill backporting some PHP 7.2+ features to lower PHP versions",
            "homepage": "https://symfony.com",
            "keywords": [
                "compatibility",
                "polyfill",
                "portable",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:47:27+00:00"
        },
        {
            "name": "symfony/polyfill-util",
            "version": "v1.17.0",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/polyfill-util.git",
                "reference": "4afb4110fc037752cf0ce9869f9ab8162c4e20d7"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/polyfill-util/zipball/4afb4110fc037752cf0ce9869f9ab8162c4e20d7",
                "reference": "4afb4110fc037752cf0ce9869f9ab8162c4e20d7",
                "shasum": ""
            },
            "require": {
                "php": ">=5.3.3"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.17-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Polyfill\\Util\\": ""
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Nicolas Grekas",
                    "email": "p@tchwork.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony utilities for portability of PHP codes",
            "homepage": "https://symfony.com",
            "keywords": [
                "compat",
                "compatibility",
                "polyfill",
                "shim"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-12T16:14:59+00:00"
        },
        {
            "name": "symfony/process",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/process.git",
                "reference": "8a895f0c92a7c4b10db95139bcff71bdf66d4d21"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/process/zipball/8a895f0c92a7c4b10db95139bcff71bdf66d4d21",
                "reference": "8a895f0c92a7c4b10db95139bcff71bdf66d4d21",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Process\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Process Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-23T17:05:51+00:00"
        },
        {
            "name": "symfony/psr-http-message-bridge",
            "version": "v1.1.2",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/psr-http-message-bridge.git",
                "reference": "a33352af16f78a5ff4f9d90811536abf210df12b"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/psr-http-message-bridge/zipball/a33352af16f78a5ff4f9d90811536abf210df12b",
                "reference": "a33352af16f78a5ff4f9d90811536abf210df12b",
                "shasum": ""
            },
            "require": {
                "php": "^5.3.3 || ^7.0",
                "psr/http-message": "^1.0",
                "symfony/http-foundation": "^2.3.42 || ^3.4 || ^4.0"
            },
            "require-dev": {
                "symfony/phpunit-bridge": "^3.4 || ^4.0"
            },
            "suggest": {
                "nyholm/psr7": "For a super lightweight PSR-7/17 implementation"
            },
            "type": "symfony-bridge",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.1-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Bridge\\PsrHttpMessage\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Symfony Community",
                    "homepage": "http://symfony.com/contributors"
                },
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                }
            ],
            "description": "PSR HTTP message bridge",
            "homepage": "http://symfony.com",
            "keywords": [
                "http",
                "http-message",
                "psr-17",
                "psr-7"
            ],
            "time": "2019-04-03T17:09:40+00:00"
        },
        {
            "name": "symfony/routing",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/routing.git",
                "reference": "e0d43b6f9417ad59ecaa8e2f799b79eef417387f"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/routing/zipball/e0d43b6f9417ad59ecaa8e2f799b79eef417387f",
                "reference": "e0d43b6f9417ad59ecaa8e2f799b79eef417387f",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8"
            },
            "conflict": {
                "symfony/config": "<3.3.1",
                "symfony/dependency-injection": "<3.3",
                "symfony/yaml": "<3.4"
            },
            "require-dev": {
                "doctrine/annotations": "~1.0",
                "psr/log": "~1.0",
                "symfony/config": "^3.3.1|~4.0",
                "symfony/dependency-injection": "~3.3|~4.0",
                "symfony/expression-language": "~2.8|~3.0|~4.0",
                "symfony/http-foundation": "~2.8|~3.0|~4.0",
                "symfony/yaml": "~3.4|~4.0"
            },
            "suggest": {
                "doctrine/annotations": "For using the annotation loader",
                "symfony/config": "For using the all-in-one router or any loader",
                "symfony/expression-language": "For using expression matching",
                "symfony/http-foundation": "For using a Symfony Request object",
                "symfony/yaml": "For using the YAML loader"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Routing\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Routing Component",
            "homepage": "https://symfony.com",
            "keywords": [
                "router",
                "routing",
                "uri",
                "url"
            ],
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T19:50:06+00:00"
        },
        {
            "name": "symfony/serializer",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/serializer.git",
                "reference": "0db90db012b1b0a04fbb2d64ae9160871cad9d4f"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/serializer/zipball/0db90db012b1b0a04fbb2d64ae9160871cad9d4f",
                "reference": "0db90db012b1b0a04fbb2d64ae9160871cad9d4f",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/polyfill-ctype": "~1.8"
            },
            "conflict": {
                "phpdocumentor/type-resolver": "<0.2.1",
                "symfony/dependency-injection": "<3.2",
                "symfony/property-access": ">=3.0,<3.0.4|>=2.8,<2.8.4",
                "symfony/property-info": "<3.1",
                "symfony/yaml": "<3.4"
            },
            "require-dev": {
                "doctrine/annotations": "~1.0",
                "doctrine/cache": "~1.0",
                "phpdocumentor/reflection-docblock": "^3.0|^4.0",
                "symfony/cache": "~3.1|~4.0",
                "symfony/config": "~2.8|~3.0|~4.0",
                "symfony/dependency-injection": "~3.2|~4.0",
                "symfony/http-foundation": "~2.8|~3.0|~4.0",
                "symfony/property-access": "~2.8|~3.0|~4.0",
                "symfony/property-info": "^3.4.13|~4.0",
                "symfony/yaml": "~3.4|~4.0"
            },
            "suggest": {
                "doctrine/annotations": "For using the annotation mapping. You will also need doctrine/cache.",
                "doctrine/cache": "For using the default cached annotation reader and metadata cache.",
                "psr/cache-implementation": "For using the metadata cache.",
                "symfony/config": "For using the XML mapping loader.",
                "symfony/http-foundation": "For using a MIME type guesser within the DataUriNormalizer.",
                "symfony/property-access": "For using the ObjectNormalizer.",
                "symfony/property-info": "To deserialize relations.",
                "symfony/yaml": "For using the default YAML mapping loader."
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Serializer\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Serializer Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T18:58:05+00:00"
        },
        {
            "name": "symfony/translation",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/translation.git",
                "reference": "b0cd62ef0ff7ec31b67d78d7fc818e2bda4e844f"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/translation/zipball/b0cd62ef0ff7ec31b67d78d7fc818e2bda4e844f",
                "reference": "b0cd62ef0ff7ec31b67d78d7fc818e2bda4e844f",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/polyfill-mbstring": "~1.0"
            },
            "conflict": {
                "symfony/config": "<2.8",
                "symfony/dependency-injection": "<3.4",
                "symfony/yaml": "<3.4"
            },
            "require-dev": {
                "psr/log": "~1.0",
                "symfony/config": "~2.8|~3.0|~4.0",
                "symfony/dependency-injection": "~3.4|~4.0",
                "symfony/finder": "~2.8|~3.0|~4.0",
                "symfony/http-kernel": "~3.4|~4.0",
                "symfony/intl": "^2.8.18|^3.2.5|~4.0",
                "symfony/var-dumper": "~3.4|~4.0",
                "symfony/yaml": "~3.4|~4.0"
            },
            "suggest": {
                "psr/log-implementation": "To use logging capability in translator",
                "symfony/config": "",
                "symfony/yaml": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Translation\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Translation Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T18:58:05+00:00"
        },
        {
            "name": "symfony/validator",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/validator.git",
                "reference": "5fb88120a11a75e17b602103a893dd8b27804529"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/validator/zipball/5fb88120a11a75e17b602103a893dd8b27804529",
                "reference": "5fb88120a11a75e17b602103a893dd8b27804529",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/polyfill-ctype": "~1.8",
                "symfony/polyfill-mbstring": "~1.0",
                "symfony/translation": "~2.8|~3.0|~4.0"
            },
            "conflict": {
                "doctrine/lexer": "<1.0.2",
                "phpunit/phpunit": "<4.8.35|<5.4.3,>=5.0",
                "symfony/dependency-injection": "<3.3",
                "symfony/http-kernel": "<3.3.5",
                "symfony/yaml": "<3.4"
            },
            "require-dev": {
                "doctrine/annotations": "~1.7",
                "doctrine/cache": "~1.0",
                "egulias/email-validator": "^2.1.10",
                "symfony/cache": "~3.1|~4.0",
                "symfony/config": "~2.8|~3.0|~4.0",
                "symfony/dependency-injection": "~3.3|~4.0",
                "symfony/expression-language": "~2.8|~3.0|~4.0",
                "symfony/http-foundation": "~2.8|~3.0|~4.0",
                "symfony/http-kernel": "^3.3.5|~4.0",
                "symfony/intl": "^2.8.18|^3.2.5|~4.0",
                "symfony/property-access": "~2.8|~3.0|~4.0",
                "symfony/var-dumper": "~3.3|~4.0",
                "symfony/yaml": "~3.4|~4.0"
            },
            "suggest": {
                "doctrine/annotations": "For using the annotation mapping. You will also need doctrine/cache.",
                "doctrine/cache": "For using the default cached annotation reader and metadata cache.",
                "egulias/email-validator": "Strict (RFC compliant) email validation",
                "psr/cache-implementation": "For using the metadata cache.",
                "symfony/config": "",
                "symfony/expression-language": "For using the Expression validator",
                "symfony/http-foundation": "",
                "symfony/intl": "",
                "symfony/property-access": "For accessing properties within comparison constraints",
                "symfony/yaml": ""
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Validator\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Validator Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-30T18:43:38+00:00"
        },
        {
            "name": "symfony/yaml",
            "version": "v3.4.41",
            "source": {
                "type": "git",
                "url": "https://github.com/symfony/yaml.git",
                "reference": "7233ac2bfdde24d672f5305f2b3f6b5d741ef8eb"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/symfony/yaml/zipball/7233ac2bfdde24d672f5305f2b3f6b5d741ef8eb",
                "reference": "7233ac2bfdde24d672f5305f2b3f6b5d741ef8eb",
                "shasum": ""
            },
            "require": {
                "php": "^5.5.9|>=7.0.8",
                "symfony/polyfill-ctype": "~1.8"
            },
            "conflict": {
                "symfony/console": "<3.4"
            },
            "require-dev": {
                "symfony/console": "~3.4|~4.0"
            },
            "suggest": {
                "symfony/console": "For validating YAML files using the lint command"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "3.4-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "Symfony\\Component\\Yaml\\": ""
                },
                "exclude-from-classmap": [
                    "/Tests/"
                ]
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com"
                },
                {
                    "name": "Symfony Community",
                    "homepage": "https://symfony.com/contributors"
                }
            ],
            "description": "Symfony Yaml Component",
            "homepage": "https://symfony.com",
            "funding": [
                {
                    "url": "https://symfony.com/sponsor",
                    "type": "custom"
                },
                {
                    "url": "https://github.com/fabpot",
                    "type": "github"
                },
                {
                    "url": "https://tidelift.com/funding/github/packagist/symfony/symfony",
                    "type": "tidelift"
                }
            ],
            "time": "2020-05-11T07:51:54+00:00"
        },
        {
            "name": "twig/twig",
            "version": "v1.42.5",
            "source": {
                "type": "git",
                "url": "https://github.com/twigphp/Twig.git",
                "reference": "87b2ea9d8f6fd014d0621ca089bb1b3769ea3f8e"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/twigphp/Twig/zipball/87b2ea9d8f6fd014d0621ca089bb1b3769ea3f8e",
                "reference": "87b2ea9d8f6fd014d0621ca089bb1b3769ea3f8e",
                "shasum": ""
            },
            "require": {
                "php": ">=5.5.0",
                "symfony/polyfill-ctype": "^1.8"
            },
            "require-dev": {
                "psr/container": "^1.0",
                "symfony/phpunit-bridge": "^4.4|^5.0"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "1.42-dev"
                }
            },
            "autoload": {
                "psr-0": {
                    "Twig_": "lib/"
                },
                "psr-4": {
                    "Twig\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "BSD-3-Clause"
            ],
            "authors": [
                {
                    "name": "Fabien Potencier",
                    "email": "fabien@symfony.com",
                    "homepage": "http://fabien.potencier.org",
                    "role": "Lead Developer"
                },
                {
                    "name": "Twig Team",
                    "role": "Contributors"
                },
                {
                    "name": "Armin Ronacher",
                    "email": "armin.ronacher@active-4.com",
                    "role": "Project Founder"
                }
            ],
            "description": "Twig, the flexible, fast, and secure template language for PHP",
            "homepage": "https://twig.symfony.com",
            "keywords": [
                "templating"
            ],
            "time": "2020-02-11T05:59:23+00:00"
        },
        {
            "name": "typo3/phar-stream-wrapper",
            "version": "v3.1.4",
            "source": {
                "type": "git",
                "url": "https://github.com/TYPO3/phar-stream-wrapper.git",
                "reference": "e0c1b495cfac064f4f5c4bcb6bf67bb7f345ed04"
            },
            "dist": {
                "type": "zip",
                "url": "https://api.github.com/repos/TYPO3/phar-stream-wrapper/zipball/e0c1b495cfac064f4f5c4bcb6bf67bb7f345ed04",
                "reference": "e0c1b495cfac064f4f5c4bcb6bf67bb7f345ed04",
                "shasum": ""
            },
            "require": {
                "ext-json": "*",
                "php": "^7.0"
            },
            "require-dev": {
                "ext-xdebug": "*",
                "phpunit/phpunit": "^6.5"
            },
            "suggest": {
                "ext-fileinfo": "For PHP builtin file type guessing, otherwise uses internal processing"
            },
            "type": "library",
            "extra": {
                "branch-alias": {
                    "dev-master": "v3.x-dev"
                }
            },
            "autoload": {
                "psr-4": {
                    "TYPO3\\PharStreamWrapper\\": "src/"
                }
            },
            "notification-url": "https://packagist.org/downloads/",
            "license": [
                "MIT"
            ],
            "description": "Interceptors for PHP's native phar:// stream handling",
            "homepage": "https://typo3.org/",
            "keywords": [
                "phar",
                "php",
                "security",
                "stream-wrapper"
            ],
            "time": "2019-12-10T11:53:27+00:00"
        }
    ],
    "packages-dev": [],
    "aliases": [],
    "minimum-stability": "dev",
    "stability-flags": [],
    "prefer-stable": true,
    "prefer-lowest": false,
    "platform": [],
    "platform-dev": [],
    "plugin-api-version": "1.1.0"
}
